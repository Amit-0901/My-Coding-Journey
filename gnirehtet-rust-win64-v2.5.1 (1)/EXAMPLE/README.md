# TradeConnect B2B Marketplace

A next-generation B2B marketplace prototype designed with a mobile-first, eye-soothing aesthetic.

## 🐛 Bugs & Limitations Report

### 1. Image Hotlinking Stability (New)
**Issue:** The app currently uses image URLs from Google Shopping (`encrypted-tbn...`).
**Impact:** These links are often temporary or session-based. They may expire or break (403 Forbidden) after a few days, leading to broken images in the UI.
**Fix Required:** Download the images and host them on a permanent CDN (like Cloudinary, AWS S3) or inside the `public/` folder for production.

### 2. Static Exchange Rates
**Issue:** The application uses hardcoded exchange rates (e.g., 1 USD = 84.5 INR).
**Impact:** Prices will not reflect real-time market fluctuations.
**Fix Required:** Integrate a live Forex API (like OpenExchangeRates or Fixer.io) to fetch rates daily.

### 3. Browser "Back" Button UX
**Issue:** If a user opens a Modal (Auth) or the Side Sheet (History) and presses the browser's "Back" button, they are navigated away from the application entirely instead of just closing the modal.
**Fix Required:** Implement History API management.

### 4. Search & Filter Logic
**Issue:** The Search bar and Filter chips are visual-only.
**Fix Required:** Implement local filtering logic.

### ✅ Solved Bugs
*   **Data Persistence:** User session and enquiries persist across reloads.
*   **Global Currency Support:** Added support for 15+ major world currencies.
*   **Category Filtering:** Logic implemented for category chips.

## Tech Stack
*   React 18 + TypeScript
*   Tailwind CSS (Styling)
*   Zustand (State Management + Persistence)
*   Lucide React (Icons)
