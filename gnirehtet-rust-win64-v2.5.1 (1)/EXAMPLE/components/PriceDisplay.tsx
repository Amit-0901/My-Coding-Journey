import React, { useEffect, useState } from 'react';
import { useStore, CURRENCY_CONFIG } from '../store';

interface PriceDisplayProps {
  basePriceUsd: number;
  className?: string;
  perUnit?: boolean;
}

export const PriceDisplay: React.FC<PriceDisplayProps> = ({ basePriceUsd, className = "", perUnit = false }) => {
  const currency = useStore((state) => state.currency);
  const [mounted, setMounted] = useState(false);

  // Hydration safety: ensure we only render the converted price on the client
  // after we know the browser environment context.
  useEffect(() => {
    setMounted(true);
  }, []);

  if (!mounted) {
    // Return a skeleton or a safe default (USD) during SSR/Initial Paint to avoid flicker
    return <span className={`bg-slate-200 animate-pulse rounded h-6 w-24 inline-block ${className}`}></span>;
  }

  const config = CURRENCY_CONFIG[currency];
  const convertedPrice = basePriceUsd * config.rate;
  
  // B2B formatting: Use commas and 2 decimal places if small number, otherwise round
  const formattedPrice = convertedPrice.toLocaleString(undefined, {
    minimumFractionDigits: convertedPrice < 100 ? 2 : 0,
    maximumFractionDigits: 2,
  });

  return (
    <span className={`font-bold ${className}`}>
      {config.symbol} {formattedPrice}
      {perUnit && <span className="text-xs font-normal text-slate-500 ml-1">/ unit</span>}
    </span>
  );
};