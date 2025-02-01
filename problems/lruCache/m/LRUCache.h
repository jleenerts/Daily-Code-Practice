#ifndef LRU_CACHE_H_
#define LRU_CACHE_H_

#include <vector>
#include <iostream>
#include <list>
#include <map>

class LRUCache {
    private:
        int size = 0;
        std::map<int,std::list<std::pair<int, int>>::iterator> addresses;
        std::list<std::pair<int, int>> values;
    public:
        LRUCache(int capacity);
        int get(int key);
        void put(int key, int value);

};

#endif
