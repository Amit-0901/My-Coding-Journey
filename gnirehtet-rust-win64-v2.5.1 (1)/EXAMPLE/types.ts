export interface Product {
  id: string;
  title: string;
  category: string; // For filtering
  priceUsd: number;
  minOrder: string;
  image: string;
  supplier: {
    name: string;
    verified: boolean;
    responseRate: string;
    location: string;
  };
  // Flexible JSON structure for specs (Key feature for B2B)
  specs: Record<string, string>;
}

export interface User {
  id: string;
  phone: string;
  name?: string;
  companyName?: string;
  isAuthenticated: boolean;
}

export interface Enquiry {
  id: string;
  productId: string;
  productTitle: string;
  productImage: string;
  status: 'PENDING' | 'QUOTED' | 'CLOSED';
  date: string;
  details: {
    quantity: number;
    unit: string;
    purpose: string;
    message?: string;
  };
}

// Expanded list of major currencies
export type Currency = 
  | 'USD' | 'EUR' | 'GBP' | 'INR' | 'JPY' | 'CNY' 
  | 'AUD' | 'CAD' | 'SGD' | 'AED' | 'SAR' | 'KRW' 
  | 'RUB' | 'BRL' | 'MXN' | 'ZAR';

export interface CurrencyConfig {
  code: Currency;
  symbol: string;
  rate: number; // Conversion rate from USD
  name: string;
}