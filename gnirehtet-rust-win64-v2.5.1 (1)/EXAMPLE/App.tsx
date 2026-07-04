import React, { useEffect } from 'react';
import { HashRouter, Routes, Route, useLocation } from 'react-router-dom';
import { ProductListing } from './pages/ProductListing';
import { ContactRFQ } from './pages/ContactRFQ';
import { AuthModal } from './components/AuthModal';
import { HistorySheet } from './components/HistorySheet';
import { useStore, CURRENCY_CONFIG } from './store';
import { Globe, ChevronDown } from 'lucide-react';
import { Currency } from './types';

// Layout wrapper to include Header/Auth components
const Layout: React.FC<{ children: React.ReactNode }> = ({ children }) => {
  const { user, openAuthModal, toggleHistory, currency, setCurrency } = useStore();
  const location = useLocation();

  // Scroll to top on route change
  useEffect(() => {
    window.scrollTo(0, 0);
  }, [location]);

  return (
    <div className="antialiased text-slate-900">
      {/* Global Header */}
      <nav className="bg-white border-b border-slate-200 sticky top-0 z-40">
        <div className="max-w-7xl mx-auto px-4 h-16 flex items-center justify-between">
          <div className="flex items-center gap-2">
            <div className="bg-blue-600 text-white p-1.5 rounded-lg font-bold text-xl tracking-tighter">TC</div>
            <span className="font-bold text-lg hidden md:block text-slate-800">TradeConnect</span>
          </div>

          <div className="flex items-center gap-4">
            {/* Global Currency Selector */}
            <div className="relative group">
              <div className="flex items-center gap-2 px-3 py-1.5 bg-slate-100 rounded-full hover:bg-slate-200 transition-colors cursor-pointer">
                <Globe size={14} className="text-slate-500" />
                <select 
                  value={currency}
                  onChange={(e) => setCurrency(e.target.value as Currency)}
                  className="bg-transparent border-none p-0 pr-1 text-xs font-medium text-slate-700 focus:ring-0 cursor-pointer outline-none appearance-none"
                >
                  {Object.values(CURRENCY_CONFIG).map((c) => (
                    <option key={c.code} value={c.code}>
                      {c.code} ({c.symbol})
                    </option>
                  ))}
                </select>
                <ChevronDown size={12} className="text-slate-400 pointer-events-none" />
              </div>
            </div>

            {user ? (
              <button 
                onClick={() => toggleHistory(true)}
                className="flex items-center gap-2 text-sm font-medium text-slate-700 hover:text-blue-600"
              >
                <span className="hidden md:inline">My Enquiries</span>
                <div className="w-8 h-8 rounded-full bg-blue-100 text-blue-600 flex items-center justify-center font-bold">
                  {user.phone.slice(-2)}
                </div>
              </button>
            ) : (
               <button 
                onClick={openAuthModal}
                className="text-sm font-semibold text-blue-600 hover:text-blue-700"
              >
                Sign In
              </button>
            )}
          </div>
        </div>
      </nav>

      {children}
      
      <AuthModal />
      <HistorySheet />
    </div>
  );
};

// Middleware Simulation Component
// In a real Next.js app, this logic lives in middleware.ts
const MiddlewareSimulator = () => {
  const { setCurrency, currency } = useStore();

  useEffect(() => {
    // Only attempt to set currency if it hasn't been set (or we want to force check on first load)
    // Here we check navigator.language to map to a currency
    const userLang = navigator.language;
    
    // Mapping browser locale to Currency Code
    const localeMap: Record<string, Currency> = {
      'en-IN': 'INR', 'hi-IN': 'INR',
      'en-GB': 'GBP',
      'ja-JP': 'JPY',
      'zh-CN': 'CNY',
      'en-AU': 'AUD',
      'en-CA': 'CAD',
      'ko-KR': 'KRW',
      'ru-RU': 'RUB',
      'pt-BR': 'BRL',
    };

    // Simple heuristic for detection
    // Note: We use a flag in localStorage in a real app to not overwrite user preference
    // For this prototype, we log the detection.
    const detected = Object.keys(localeMap).find(key => userLang.includes(key));
    
    if (detected) {
      console.log(`Middleware: Detected ${detected}, suggesting ${localeMap[detected]}`);
      // In a real app, we'd check if user has manually set a preference before overriding
      // setCurrency(localeMap[detected]); 
    }
    
    // Fallback: If currency is INR/USD (default) and we detect something else, maybe switch?
    // Kept simple for now to avoid annoying auto-switching during demo.
    
  }, [setCurrency]);

  return null;
};

const App: React.FC = () => {
  return (
    <HashRouter>
      <MiddlewareSimulator />
      <Layout>
        <Routes>
          <Route path="/" element={<ProductListing />} />
          <Route path="/contact/:id" element={<ContactRFQ />} />
        </Routes>
      </Layout>
    </HashRouter>
  );
};

export default App;