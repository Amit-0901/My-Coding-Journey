import React, { useState } from 'react';
import { useStore } from '../store';
import { X, Smartphone, ArrowRight, Loader2, Lock } from 'lucide-react';

export const AuthModal: React.FC = () => {
  const { isAuthModalOpen, closeAuthModal, login } = useStore();
  const [step, setStep] = useState<'PHONE' | 'OTP'>('PHONE');
  const [phone, setPhone] = useState('');
  const [otp, setOtp] = useState('');
  const [isLoading, setIsLoading] = useState(false);
  const [error, setError] = useState('');

  if (!isAuthModalOpen) return null;

  const handleSendOtp = (e: React.FormEvent) => {
    e.preventDefault();
    if (phone.length < 10) {
      setError('Please enter a valid phone number');
      return;
    }
    setError('');
    setIsLoading(true);
    // Simulate API call
    setTimeout(() => {
      setIsLoading(false);
      setStep('OTP');
    }, 1000);
  };

  const handleVerifyOtp = (e: React.FormEvent) => {
    e.preventDefault();
    setIsLoading(true);
    // Simulate Verification
    setTimeout(() => {
      setIsLoading(false);
      if (otp === '1234') {
        login(phone);
        // Reset state
        setStep('PHONE');
        setPhone('');
        setOtp('');
      } else {
        setError('Invalid OTP (Try 1234)');
      }
    }, 1000);
  };

  return (
    <div className="fixed inset-0 z-50 flex items-center justify-center p-4 bg-slate-900/50 backdrop-blur-sm">
      <div className="bg-white rounded-2xl shadow-xl w-full max-w-md overflow-hidden relative animate-fade-in-up">
        
        {/* Header */}
        <div className="px-6 py-4 border-b border-slate-100 flex justify-between items-center bg-slate-50">
          <h2 className="text-lg font-semibold text-slate-800">
            {step === 'PHONE' ? 'Sign in or Join' : 'Verify Number'}
          </h2>
          <button onClick={closeAuthModal} className="text-slate-400 hover:text-slate-600">
            <X size={20} />
          </button>
        </div>

        {/* Body */}
        <div className="p-6">
          {step === 'PHONE' ? (
            <form onSubmit={handleSendOtp} className="space-y-4">
              <div className="space-y-2">
                <label className="text-sm font-medium text-slate-700">Mobile Number</label>
                <div className="relative">
                  <Smartphone className="absolute left-3 top-1/2 -translate-y-1/2 text-slate-400" size={18} />
                  <input
                    type="tel"
                    value={phone}
                    onChange={(e) => setPhone(e.target.value)}
                    placeholder="+91 98765 43210"
                    className="w-full pl-10 pr-4 py-3 rounded-lg border border-slate-200 focus:border-blue-500 focus:ring-2 focus:ring-blue-100 outline-none transition-all"
                    autoFocus
                  />
                </div>
              </div>
              
              {error && <p className="text-red-500 text-sm">{error}</p>}

              <button 
                type="submit" 
                disabled={isLoading}
                className="w-full bg-blue-600 hover:bg-blue-700 text-white font-medium py-3 rounded-lg transition-colors flex items-center justify-center gap-2 disabled:opacity-70"
              >
                {isLoading ? <Loader2 className="animate-spin" size={20} /> : 'Continue'}
                {!isLoading && <ArrowRight size={18} />}
              </button>
              
              <p className="text-xs text-center text-slate-400 mt-4">
                By continuing, you agree to our Terms of Service.
              </p>
            </form>
          ) : (
            <form onSubmit={handleVerifyOtp} className="space-y-4">
               <div className="text-center mb-6">
                 <div className="inline-flex items-center justify-center w-12 h-12 bg-blue-50 rounded-full mb-3 text-blue-600">
                   <Lock size={20} />
                 </div>
                 <p className="text-sm text-slate-600">
                   Enter the code sent to <span className="font-semibold text-slate-900">{phone}</span>
                 </p>
               </div>

              <div className="space-y-2">
                <input
                  type="text"
                  value={otp}
                  onChange={(e) => setOtp(e.target.value)}
                  placeholder="1234"
                  maxLength={4}
                  className="w-full text-center text-2xl tracking-widest py-3 rounded-lg border border-slate-200 focus:border-blue-500 focus:ring-2 focus:ring-blue-100 outline-none transition-all"
                  autoFocus
                />
              </div>

              {error && <p className="text-red-500 text-sm text-center">{error}</p>}

              <button 
                type="submit" 
                disabled={isLoading}
                className="w-full bg-blue-600 hover:bg-blue-700 text-white font-medium py-3 rounded-lg transition-colors flex items-center justify-center gap-2 disabled:opacity-70"
              >
                {isLoading ? <Loader2 className="animate-spin" size={20} /> : 'Verify & Login'}
              </button>
              
              <button 
                type="button" 
                onClick={() => { setStep('PHONE'); setError(''); }}
                className="w-full text-sm text-slate-500 hover:text-blue-600 py-2"
              >
                Change Number
              </button>
            </form>
          )}
        </div>
      </div>
    </div>
  );
};