import { Product } from './types';

export const PRODUCTS: Product[] = [
  {
    id: 'p1',
    title: 'Industrial Diesel Generator 125 kVA',
    category: 'Machinery',
    priceUsd: 8500,
    minOrder: '1 Unit',
    // User provided image 1
    image: 'https://encrypted-tbn1.gstatic.com/shopping?q=tbn:ANd9GcT3jSTxiutLOZvGb0RUCgvS13PAZZfxE5gLYS0KZcW2zXxcoUjIVPPw8iyudIqUB9tCfCuonHsc-KMTLLk4toZ_meEXXrzF-g',
    supplier: {
      name: 'PowerTech Solutions Ltd.',
      verified: true,
      responseRate: '98%',
      location: 'Gujarat, IN'
    },
    specs: {
      'Output Power': '125 kVA',
      'Fuel Type': 'Diesel',
      'Cooling': 'Liquid Cooled',
      'Phase': '3-Phase'
    }
  },
  {
    id: 'p2',
    title: 'Cotton Yarn 40s Combed Compact',
    category: 'Textiles',
    priceUsd: 4.5,
    minOrder: '500 kg',
    image: 'https://picsum.photos/400/300?random=2',
    supplier: {
      name: 'Global Textiles Inc.',
      verified: true,
      responseRate: '85%',
      location: 'Mumbai, IN'
    },
    specs: {
      'Count': '40s',
      'Type': 'Combed Compact',
      'Usage': 'Knitting/Weaving',
      'Strength': '2400 CSP'
    }
  },
  {
    id: 'p3',
    title: 'Hydraulic Injection Molding Machine',
    category: 'Machinery',
    priceUsd: 22000,
    minOrder: '1 Unit',
    // User provided image 2
    image: 'https://encrypted-tbn2.gstatic.com/shopping?q=tbn:ANd9GcSjHLnj1sOYSL4qRxH-MhZ-lEBrru7vwq9jaYM2xQhr2hChVvvBnJBHpg4RduSQllmEsrOkNrwVLqrsYDHN_r3YWNXRV6wLWQ',
    supplier: {
      name: 'Precision Machinery Co.',
      verified: false,
      responseRate: '70%',
      location: 'Shenzhen, CN'
    },
    specs: {
      'Clamping Force': '180 Ton',
      'Shot Weight': '350g',
      'Control System': 'PLC',
      'Warranty': '2 Years'
    }
  },
  {
    id: 'p4',
    title: 'Sodium Lauryl Ether Sulfate (SLES) 70%',
    category: 'Chemicals',
    priceUsd: 1.2,
    minOrder: '170 kg Drum',
    image: 'https://picsum.photos/400/300?random=4',
    supplier: {
      name: 'ChemCorp International',
      verified: true,
      responseRate: '92%',
      location: 'Pune, IN'
    },
    specs: {
      'Purity': '70%',
      'Grade': 'Industrial',
      'Appearance': 'White Paste',
      'Packaging': 'HDPE Drum'
    }
  },
    {
    id: 'p5',
    title: 'CNC Laser Cutting Machine 3000W',
    category: 'Machinery',
    priceUsd: 15500,
    minOrder: '1 Unit',
    image: 'https://picsum.photos/400/300?random=5',
    supplier: {
      name: 'LaserMax Systems',
      verified: true,
      responseRate: '95%',
      location: 'Delhi, IN'
    },
    specs: {
      'Laser Source': 'Fiber',
      'Power': '3000W',
      'Cutting Area': '1500x3000mm',
      'Max Speed': '120m/min'
    }
  },
  {
    id: 'p6',
    title: 'Organic Arabica Coffee Beans (Raw)',
    category: 'Agriculture',
    priceUsd: 6.8,
    minOrder: '1000 kg',
    image: 'https://picsum.photos/400/300?random=6',
    supplier: {
      name: 'Green Earth Exports',
      verified: true,
      responseRate: '88%',
      location: 'Coorg, IN'
    },
    specs: {
      'Grade': 'AAA',
      'Moisture': '11-12%',
      'Screen Size': '18+',
      'Cert': 'Fairtrade'
    }
  }
];