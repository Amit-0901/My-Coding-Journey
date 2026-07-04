import { create } from 'zustand';
import { persist, createJSONStorage } from 'zustand/middleware';
import { User, Enquiry, Currency, CurrencyConfig } from './types';

interface AppState {
  // Session State
  user: User | null;
  isAuthModalOpen: boolean;
  
  // Geolocation/Localization State
  currency: Currency;
  
  // Data State
  enquiries: Enquiry[];
  isHistoryOpen: boolean; // For the side drawer

  // Actions
  login: (phone: string) => void;
  updateProfile: (details: Partial<User>) => void;
  logout: () => void;
  openAuthModal: () => void;
  closeAuthModal: () => void;
  toggleHistory: (isOpen: boolean) => void;
  setCurrency: (currency: Currency) => void;
  addEnquiry: (enquiry: Enquiry) => void;
}

export const useStore = create<AppState>()(
  persist(
    (set) => ({
      user: null, // Start unauthenticated
      isAuthModalOpen: false,
      
      currency: 'USD', // Default
      
      enquiries: [],
      isHistoryOpen: false,

      login: (phone: string) => set({ 
        user: { id: 'u1', phone, isAuthenticated: true },
        isAuthModalOpen: false 
      }),

      updateProfile: (details) => set((state) => ({
        user: state.user ? { ...state.user, ...details } : null
      })),

      logout: () => set({ user: null }),

      openAuthModal: () => set({ isAuthModalOpen: true }),
      closeAuthModal: () => set({ isAuthModalOpen: false }),
      
      toggleHistory: (isOpen) => set({ isHistoryOpen: isOpen }),
      
      setCurrency: (currency) => set({ currency }),
      
      addEnquiry: (enquiry) => set((state) => ({
        enquiries: [enquiry, ...state.enquiries]
      })),
    }),
    {
      name: 'tradeconnect-storage', // unique name
      storage: createJSONStorage(() => localStorage),
      partialize: (state) => ({ 
        user: state.user, 
        enquiries: state.enquiries,
        currency: state.currency 
      }), // Only persist these fields
    }
  )
);

// Expanded Currency Configuration with Mock Rates (Base: USD)
export const CURRENCY_CONFIG: Record<Currency, CurrencyConfig> = {
  USD: { code: 'USD', symbol: '$', rate: 1, name: 'US Dollar' },
  EUR: { code: 'EUR', symbol: '€', rate: 0.92, name: 'Euro' },
  GBP: { code: 'GBP', symbol: '£', rate: 0.79, name: 'British Pound' },
  INR: { code: 'INR', symbol: '₹', rate: 84.5, name: 'Indian Rupee' },
  JPY: { code: 'JPY', symbol: '¥', rate: 151.2, name: 'Japanese Yen' },
  CNY: { code: 'CNY', symbol: '¥', rate: 7.23, name: 'Chinese Yuan' },
  AUD: { code: 'AUD', symbol: 'A$', rate: 1.52, name: 'Australian Dollar' },
  CAD: { code: 'CAD', symbol: 'C$', rate: 1.36, name: 'Canadian Dollar' },
  SGD: { code: 'SGD', symbol: 'S$', rate: 1.35, name: 'Singapore Dollar' },
  AED: { code: 'AED', symbol: 'د.إ', rate: 3.67, name: 'UAE Dirham' },
  SAR: { code: 'SAR', symbol: '﷼', rate: 3.75, name: 'Saudi Riyal' },
  KRW: { code: 'KRW', symbol: '₩', rate: 1350, name: 'South Korean Won' },
  RUB: { code: 'RUB', symbol: '₽', rate: 92.5, name: 'Russian Ruble' },
  BRL: { code: 'BRL', symbol: 'R$', rate: 5.15, name: 'Brazilian Real' },
  MXN: { code: 'MXN', symbol: 'Mex$', rate: 16.8, name: 'Mexican Peso' },
  ZAR: { code: 'ZAR', symbol: 'R', rate: 18.9, name: 'South African Rand' },
};