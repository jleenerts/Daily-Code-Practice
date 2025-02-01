#include <iostream>
#include "LRUCache.h"

int main() {
    // Create an LRUCache object with a capacity of 2
    LRUCache cache(2);

    // Test sequence (as per your example)
    std::cout << "put(1, 10): ";
    cache.put(1, 10); // cache: {1=10}

    std::cout << "get(1): " << cache.get(1) << std::endl; // returns 10

    std::cout << "put(2, 20): ";
    cache.put(2, 20); // cache: {1=10, 2=20}

    std::cout << "put(3, 30): ";
    cache.put(3, 30); // cache: {2=20, 3=30}, key 1 is evicted

    std::cout << "get(2): " << cache.get(2) << std::endl; // returns 20
    std::cout << "get(1): " << cache.get(1) << std::endl; // returns -1 (not found)

    return 0;
}
