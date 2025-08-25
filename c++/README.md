### README.md
```markdown
# C++ Lock-Free Order Book Sample

This sample demonstrates a simple lock-free order book using atomic operations.  
Run with:  
```
g++ order_book.cpp -o order_book -std=c++11
./order_book
```
You will see price levels and their sizes updated atomically, simulating HFT order book updates.
```