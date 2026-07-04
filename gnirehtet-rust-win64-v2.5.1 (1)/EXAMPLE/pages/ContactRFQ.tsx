import React, { useState, useEffect } from 'react';
import { useParams, useNavigate } from 'react-router-dom';
import { PRODUCTS } from '../mockData';
import { useStore } from '../store';
import { ArrowLeft, Send, CheckCircle2, Building2 } from 'lucide-react';

export const ContactRFQ: React.FC = () => {
  const { id } = useParams();
  const navigate = useNavigate();
  const { user, addEnquiry, updateProfile } = useStore();
  const [isSubmitting, setIsSubmitting] = useState(false);
  const [success, setSuccess] = useState(false);

  // Form State
  const [quantity, setQuantity] = useState('');
  const [unit, setUnit] = useState('Pieces');
  const [purpose, setPurpose] = useState('Resale');
  const [message, setMessage] = useState('');
  
  // Progressive Profiling State (Only shown if user lacks data)
  const [companyName, setCompanyName] = useState(user?.companyName || '');
  const [userName, setUserName] = useState(user?.name || '');

  const product = PRODUCTS.find(p => p.id === id);

  if (!product) return <div>Product not found</div>;

  // Protect Route
  useEffect(() => {
    if (!user?.isAuthenticated) {
      navigate('/');
    }
  }, [user, navigate]);

  const handleSubmit = (e: React.FormEvent) => {
    e.preventDefault();
    setIsSubmitting(true);

    // 1. Progressive Profiling: Update user profile if new data was collected
    if (!user?.companyName && companyName) {
      updateProfile({ companyName, name: userName });
    }

    // 2. Create Enquiry
    const enquiry = {
      id: Date.now().toString(),
      productId: product.id,
      productTitle: product.title,
      productImage: product.image,
      status: 'PENDING' as const,
      date: new Date().toISOString(),
      details: {
        quantity: Number(quantity),
        unit,
        purpose,
        message
      }
    };

    // Simulate Network Delay
    setTimeout(() => {
      addEnquiry(enquiry);
      setIsSubmitting(false);
      setSuccess(true);
      // Redirect after success
      setTimeout(() => navigate('/'), 2000);
    }, 1500);
  };

  if (success) {
    return (
      <div className="min-h-screen flex flex-col items-center justify-center p-6 bg-slate-50">
        <div className="bg-white p-8 rounded-2xl shadow-lg text-center max-w-sm w-full animate-in fade-in zoom-in duration-300">
          <div className="w-16 h-16 bg-green-100 rounded-full flex items-center justify-center mx-auto mb-4">
            <CheckCircle2 className="text-green-600" size={32} />
          </div>
          <h2 className="text-2xl font-bold text-slate-900 mb-2">Inquiry Sent!</h2>
          <p className="text-slate-500 mb-6">The supplier has received your requirement. Check "My Enquiries" for updates.</p>
          <button onClick={() => navigate('/')} className="w-full bg-slate-900 text-white py-3 rounded-lg font-medium">
            Back to Home
          </button>
        </div>
      </div>
    );
  }

  return (
    <div className="min-h-screen bg-slate-50 pb-24">
      {/* Header */}
      <header className="bg-white border-b border-slate-200 sticky top-0 z-30">
        <div className="max-w-2xl mx-auto px-4 py-4 flex items-center gap-4">
          <button onClick={() => navigate(-1)} className="p-2 -ml-2 text-slate-500 hover:bg-slate-100 rounded-full">
            <ArrowLeft size={20} />
          </button>
          <h1 className="font-semibold text-lg text-slate-900">Tell us your Requirement</h1>
        </div>
      </header>

      <div className="max-w-2xl mx-auto p-4">
        {/* Product Context Card */}
        <div className="bg-white p-4 rounded-xl shadow-sm border border-slate-100 flex gap-4 mb-6">
          <img src={product.image} className="w-16 h-16 rounded-lg object-cover bg-slate-100" />
          <div>
            <h3 className="font-semibold text-slate-900 line-clamp-1">{product.title}</h3>
            <p className="text-sm text-slate-500">To: {product.supplier.name}</p>
          </div>
        </div>

        <form onSubmit={handleSubmit} className="space-y-6">
          
          {/* Section 1: Requirement Details */}
          <div className="bg-white p-6 rounded-xl shadow-sm border border-slate-100 space-y-4">
            <h3 className="font-semibold text-slate-900 flex items-center gap-2">
              <span className="w-6 h-6 rounded-full bg-blue-100 text-blue-600 text-xs flex items-center justify-center">1</span>
              Quantity & Usage
            </h3>
            
            <div className="grid grid-cols-2 gap-4">
              <div className="space-y-1">
                <label className="text-xs font-medium text-slate-500">Quantity</label>
                <input 
                  type="number" 
                  required
                  value={quantity}
                  onChange={e => setQuantity(e.target.value)}
                  placeholder="e.g. 500"
                  className="w-full p-3 bg-slate-50 border border-slate-200 rounded-lg focus:ring-2 focus:ring-blue-100 outline-none"
                />
              </div>
              <div className="space-y-1">
                <label className="text-xs font-medium text-slate-500">Unit</label>
                <select 
                  value={unit}
                  onChange={e => setUnit(e.target.value)}
                  className="w-full p-3 bg-slate-50 border border-slate-200 rounded-lg focus:ring-2 focus:ring-blue-100 outline-none"
                >
                  <option>Pieces</option>
                  <option>Kilograms</option>
                  <option>Metric Tons</option>
                  <option>Sets</option>
                  <option>Liters</option>
                </select>
              </div>
            </div>

            <div className="space-y-1">
              <label className="text-xs font-medium text-slate-500">Purpose</label>
              <div className="flex gap-3">
                {['Resale', 'Industrial Use', 'Personal'].map((opt) => (
                  <button
                    key={opt}
                    type="button"
                    onClick={() => setPurpose(opt)}
                    className={`flex-1 py-2 text-sm rounded-lg border transition-all ${
                      purpose === opt 
                        ? 'bg-blue-600 border-blue-600 text-white' 
                        : 'bg-white border-slate-200 text-slate-600 hover:bg-slate-50'
                    }`}
                  >
                    {opt}
                  </button>
                ))}
              </div>
            </div>
          </div>

          {/* Section 2: Progressive Profiling (Conditional) */}
          {(!user?.companyName) && (
            <div className="bg-white p-6 rounded-xl shadow-sm border border-slate-100 space-y-4 animate-fade-in-up">
              <h3 className="font-semibold text-slate-900 flex items-center gap-2">
                <span className="w-6 h-6 rounded-full bg-blue-100 text-blue-600 text-xs flex items-center justify-center">2</span>
                Business Details
              </h3>
              <p className="text-xs text-slate-500 -mt-2 ml-8">Suppliers reply faster to verified businesses.</p>

              <div className="space-y-3">
                <div className="space-y-1">
                  <label className="text-xs font-medium text-slate-500">Your Name</label>
                  <input 
                    type="text" 
                    required
                    value={userName}
                    onChange={e => setUserName(e.target.value)}
                    className="w-full p-3 bg-slate-50 border border-slate-200 rounded-lg focus:ring-2 focus:ring-blue-100 outline-none"
                  />
                </div>
                <div className="space-y-1">
                   <label className="text-xs font-medium text-slate-500">Company Name</label>
                   <div className="relative">
                     <Building2 className="absolute left-3 top-1/2 -translate-y-1/2 text-slate-400" size={18} />
                     <input 
                       type="text" 
                       required
                       value={companyName}
                       onChange={e => setCompanyName(e.target.value)}
                       placeholder="e.g. Acme Traders Ltd."
                       className="w-full pl-10 pr-3 py-3 bg-slate-50 border border-slate-200 rounded-lg focus:ring-2 focus:ring-blue-100 outline-none"
                     />
                   </div>
                </div>
              </div>
            </div>
          )}

          {/* Sticky Submit Button */}
          <div className="fixed bottom-0 left-0 right-0 p-4 bg-white border-t border-slate-100 z-20 md:static md:bg-transparent md:border-none md:p-0">
             <div className="max-w-2xl mx-auto">
              <button 
                type="submit" 
                disabled={isSubmitting}
                className="w-full bg-blue-600 hover:bg-blue-700 text-white font-bold py-4 rounded-xl shadow-lg shadow-blue-200 md:shadow-none transition-all flex items-center justify-center gap-2 disabled:opacity-70 disabled:cursor-not-allowed"
              >
                {isSubmitting ? 'Sending...' : 'Send Enquiry'}
                {!isSubmitting && <Send size={18} />}
              </button>
             </div>
          </div>
        </form>
      </div>
    </div>
  );
};