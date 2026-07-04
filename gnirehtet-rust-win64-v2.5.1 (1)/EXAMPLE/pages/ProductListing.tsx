import React, { useState, useMemo } from 'react';
import { PRODUCTS } from '../mockData';
import { PriceDisplay } from '../components/PriceDisplay';
import { useStore } from '../store';
import { useNavigate } from 'react-router-dom';
import { ShieldCheck, MessageSquare, Search, SlidersHorizontal, MapPin, Heart, Zap, Inbox } from 'lucide-react';

export const ProductListing: React.FC = () => {
  const navigate = useNavigate();
  const { user, openAuthModal } = useStore();
  const [activeFilter, setActiveFilter] = useState('All');
  const [searchQuery, setSearchQuery] = useState('');

  const handleContact = (productId: string, e: React.MouseEvent) => {
    e.stopPropagation(); // Prevent card click
    if (user?.isAuthenticated) {
      navigate(`/contact/${productId}`);
    } else {
      openAuthModal();
    }
  };

  const filters = ['All', 'Machinery', 'Textiles', 'Chemicals', 'Electronics', 'Agriculture'];

  // Filter Logic
  const filteredProducts = useMemo(() => {
    return PRODUCTS.filter(product => {
      const matchesCategory = activeFilter === 'All' || product.category === activeFilter;
      const matchesSearch = 
        product.title.toLowerCase().includes(searchQuery.toLowerCase()) || 
        product.supplier.name.toLowerCase().includes(searchQuery.toLowerCase());
      
      return matchesCategory && matchesSearch;
    });
  }, [activeFilter, searchQuery]);

  return (
    <div className="min-h-screen bg-slate-50/50 pb-20 md:pb-12">
      {/* Hero / Search Section */}
      <div className="bg-white sticky top-0 z-30 shadow-sm border-b border-slate-100">
        <div className="max-w-7xl mx-auto px-4 py-4 space-y-4">
          
          {/* Search Bar */}
          <div className="flex gap-3">
            <div className="relative flex-1 group">
              <Search className="absolute left-4 top-1/2 -translate-y-1/2 text-slate-400 group-focus-within:text-blue-500 transition-colors" size={20} />
              <input 
                type="text" 
                value={searchQuery}
                onChange={(e) => setSearchQuery(e.target.value)}
                placeholder="Search products, brands, or suppliers..." 
                className="w-full pl-12 pr-4 py-3.5 bg-slate-100/80 border-transparent rounded-2xl focus:bg-white focus:ring-4 focus:ring-blue-50 focus:border-blue-200 transition-all outline-none font-medium text-slate-700 placeholder:text-slate-400"
              />
            </div>
            <button className="p-3.5 bg-white border border-slate-200 rounded-2xl text-slate-600 hover:bg-slate-50 hover:border-slate-300 transition-all shadow-sm">
              <SlidersHorizontal size={22} />
            </button>
          </div>

          {/* Filter Chips */}
          <div className="flex gap-2 overflow-x-auto no-scrollbar pb-1">
            {filters.map(filter => (
              <button
                key={filter}
                onClick={() => setActiveFilter(filter)}
                className={`px-4 py-2 rounded-full text-sm font-semibold whitespace-nowrap transition-all ${
                  activeFilter === filter 
                    ? 'bg-slate-900 text-white shadow-lg shadow-slate-900/20' 
                    : 'bg-white border border-slate-200 text-slate-600 hover:bg-slate-50 hover:border-slate-300'
                }`}
              >
                {filter}
              </button>
            ))}
          </div>
        </div>
      </div>

      {/* Main Content */}
      <main className="max-w-7xl mx-auto p-4 md:p-6">
        <div className="flex items-center justify-between mb-6">
           <h1 className="text-xl md:text-2xl font-bold text-slate-800">Featured Products</h1>
           <span className="text-sm font-medium text-slate-500">{filteredProducts.length} results found</span>
        </div>
        
        {filteredProducts.length === 0 ? (
          <div className="flex flex-col items-center justify-center py-20 text-center">
            <div className="bg-slate-100 p-6 rounded-full mb-4">
              <Inbox className="text-slate-400" size={48} />
            </div>
            <h3 className="text-lg font-bold text-slate-900 mb-2">No products found</h3>
            <p className="text-slate-500 max-w-xs">
              We couldn't find any products matching "{activeFilter !== 'All' ? activeFilter : searchQuery}".
            </p>
            <button 
              onClick={() => { setActiveFilter('All'); setSearchQuery(''); }}
              className="mt-6 text-blue-600 font-semibold hover:underline"
            >
              Clear all filters
            </button>
          </div>
        ) : (
          <div className="grid grid-cols-1 md:grid-cols-2 lg:grid-cols-3 xl:grid-cols-4 gap-6">
            {filteredProducts.map((product) => (
              <article 
                key={product.id} 
                className="group bg-white rounded-3xl border border-slate-100 shadow-[0_2px_20px_rgba(0,0,0,0.04)] hover:shadow-[0_8px_30px_rgba(0,0,0,0.08)] hover:-translate-y-1 transition-all duration-300 flex flex-col overflow-hidden cursor-pointer"
                onClick={() => handleContact(product.id, { stopPropagation: () => {} } as any)}
              >
                {/* Image Header */}
                <div className="relative aspect-[4/3] bg-slate-100 overflow-hidden">
                  <img 
                    src={product.image} 
                    alt={product.title} 
                    className="w-full h-full object-cover group-hover:scale-110 transition-transform duration-700 ease-out" 
                  />
                  
                  {/* Overlay Gradient */}
                  <div className="absolute inset-0 bg-gradient-to-t from-black/60 via-transparent to-transparent opacity-60 group-hover:opacity-40 transition-opacity" />

                  {/* Badges */}
                  <div className="absolute top-3 left-3 flex flex-col gap-2">
                     <div className="bg-white/90 backdrop-blur-md px-3 py-1 rounded-full text-xs font-bold text-slate-800 shadow-sm flex items-center gap-1">
                        <Zap size={12} className="text-yellow-500 fill-yellow-500" />
                        Min: {product.minOrder}
                     </div>
                  </div>
                  
                  <button className="absolute top-3 right-3 p-2 bg-white/20 backdrop-blur-md rounded-full text-white hover:bg-white hover:text-red-500 transition-colors">
                    <Heart size={18} />
                  </button>

                  {/* Bottom Content on Image */}
                  <div className="absolute bottom-3 left-3 right-3 text-white">
                     <div className="flex items-center gap-1.5 text-xs font-medium text-slate-200 mb-1">
                        <MapPin size={12} />
                        {product.supplier.location}
                     </div>
                  </div>
                </div>

                {/* Card Body */}
                <div className="p-5 flex-1 flex flex-col">
                  <div className="mb-4">
                     <div className="flex justify-between items-start gap-2 mb-2">
                        <h2 className="text-base font-bold text-slate-800 line-clamp-2 leading-snug group-hover:text-blue-600 transition-colors">
                          {product.title}
                        </h2>
                     </div>
                     <PriceDisplay basePriceUsd={product.priceUsd} className="text-xl text-slate-900" perUnit />
                  </div>

                  {/* Specs Pills */}
                  <div className="flex flex-wrap gap-2 mb-6">
                    {Object.entries(product.specs).slice(0, 3).map(([key, value]) => (
                      <div key={key} className="px-2.5 py-1 bg-slate-50 border border-slate-100 rounded-lg text-xs text-slate-600 font-medium truncate max-w-[100px]">
                         {value}
                      </div>
                    ))}
                  </div>
                  
                  {/* Footer / Supplier */}
                  <div className="mt-auto pt-4 border-t border-slate-50 flex items-center justify-between gap-3">
                    <div className="flex items-center gap-2 min-w-0">
                      <div className="w-8 h-8 rounded-full bg-slate-100 flex items-center justify-center text-xs font-bold text-slate-500 shrink-0">
                        {product.supplier.name.slice(0, 2).toUpperCase()}
                      </div>
                      <div className="flex flex-col min-w-0">
                         <span className="text-xs font-bold text-slate-900 truncate">{product.supplier.name}</span>
                         {product.supplier.verified && (
                           <span className="text-[10px] text-blue-600 font-medium flex items-center gap-0.5">
                             <ShieldCheck size={10} /> Verified
                           </span>
                         )}
                      </div>
                    </div>

                    <button 
                      onClick={(e) => handleContact(product.id, e)}
                      className="shrink-0 bg-slate-900 hover:bg-blue-600 text-white p-2.5 rounded-xl transition-all shadow-md shadow-slate-200 hover:shadow-blue-200 active:scale-95"
                    >
                      <MessageSquare size={18} />
                    </button>
                  </div>
                </div>
              </article>
            ))}
          </div>
        )}
      </main>
    </div>
  );
};