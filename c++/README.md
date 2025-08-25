# C++ Lock-Free Order Book Sample

Welcome to the C++ HFT sample!  
This project demonstrates a simple lock-free order book using atomic operations—a core technique in high-frequency trading systems.

---

## 🚀 How to Run

```bash
g++ order_book.cpp -o order_book -std=c++11
./order_book
```

You will see price levels and their sizes updated atomically, simulating real-world HFT order book updates.

---

## 💡 What You'll Learn

- How to use `std::atomic` for thread-safe, lock-free updates
- Structuring order books for fast access and updates
- Why atomic operations matter for ultra-low latency trading

---

## 📂 Explore More

Check out the source code and experiment with different order scenarios to deepen your understanding of HFT data structures!
