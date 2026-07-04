import React from 'react';
import { useStore } from '../store';
import { X, Package, Clock, CheckCircle, FileText } from 'lucide-react';
import { Link } from 'react-router-dom';

export const HistorySheet: React.FC = () => {
  const { isHistoryOpen, toggleHistory, enquiries, user } = useStore();

  return (
    <>
      {/* Backdrop */}
      {isHistoryOpen && (
        <div 
          className="fixed inset-0 bg-black/20 backdrop-blur-sm z-40"
          onClick={() => toggleHistory(false)}
        />
      )}

      {/* Sheet */}
      <div className={`fixed inset-y-0 right-0 w-full max-w-sm bg-white shadow-2xl z-50 transform transition-transform duration-300 ease-in-out ${isHistoryOpen ? 'translate-x-0' : 'translate-x-full'}`}>
        <div className="h-full flex flex-col">
          <div className="px-6 py-4 border-b border-slate-100 flex justify-between items-center">
            <h2 className="text-lg font-bold text-slate-800">My Enquiries</h2>
            <button onClick={() => toggleHistory(false)} className="text-slate-400 hover:text-slate-600">
              <X size={20} />
            </button>
          </div>

          <div className="flex-1 overflow-y-auto p-6 space-y-4 no-scrollbar">
            {!user ? (
              <div className="text-center py-10">
                <p className="text-slate-500">Please login to view your history.</p>
              </div>
            ) : enquiries.length === 0 ? (
              <div className="text-center py-10 flex flex-col items-center">
                <div className="w-16 h-16 bg-slate-50 rounded-full flex items-center justify-center mb-4">
                  <Package className="text-slate-300" size={32} />
                </div>
                <h3 className="text-slate-900 font-medium">No enquiries yet</h3>
                <p className="text-slate-500 text-sm mt-1">Contact suppliers to see items here.</p>
              </div>
            ) : (
              enquiries.map((enq) => (
                <div key={enq.id} className="border border-slate-100 rounded-xl p-4 hover:border-blue-100 transition-colors bg-white shadow-sm">
                  <div className="flex gap-3 mb-3">
                    <img src={enq.productImage} alt="" className="w-12 h-12 rounded-md object-cover bg-slate-100" />
                    <div>
                      <h4 className="font-medium text-slate-900 line-clamp-1">{enq.productTitle}</h4>
                      <div className="flex items-center gap-2 mt-1">
                        <span className={`text-xs px-2 py-0.5 rounded-full font-medium ${
                          enq.status === 'PENDING' ? 'bg-yellow-100 text-yellow-700' : 
                          enq.status === 'QUOTED' ? 'bg-green-100 text-green-700' : 'bg-slate-100 text-slate-600'
                        }`}>
                          {enq.status}
                        </span>
                        <span className="text-xs text-slate-400">{new Date(enq.date).toLocaleDateString()}</span>
                      </div>
                    </div>
                  </div>
                  <div className="text-xs text-slate-500 bg-slate-50 p-2 rounded flex gap-4">
                     <div>
                       <span className="font-semibold">{enq.details.quantity}</span> {enq.details.unit}
                     </div>
                     <div>
                       <span className="font-semibold">{enq.details.purpose}</span>
                     </div>
                  </div>
                </div>
              ))
            )}
          </div>
        </div>
      </div>
    </>
  );
};