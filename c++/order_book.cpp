#include <atomic>
#include <array>
#include <iostream>

struct PriceLevel {
    std::atomic<int> size;
    int price;
    PriceLevel() : size(0), price(0) {}
};

class OrderBook {
    std::array<PriceLevel, 10> levels;
public:
    void add_order(int idx, int price, int qty) {
        levels[idx].price = price;
        levels[idx].size.fetch_add(qty, std::memory_order_relaxed);
    }
    void print() {
        for (int i = 0; i < levels.size(); ++i) {
            std::cout << "Level " << i << ": Price=" << levels[i].price
                      << " Size=" << levels[i].size.load() << std::endl;
        }
    }
};

int main() {
    OrderBook book;
    book.add_order(0, 100, 50);
    book.add_order(1, 101, 75);
    book.print();
    return 0;
}