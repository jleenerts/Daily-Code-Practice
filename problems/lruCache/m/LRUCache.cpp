    #include "LRUCache.h"
    
    LRUCache::LRUCache(int capacity) {
        this->size = capacity;
    }
    
    int LRUCache::get(int key) {
        if (addresses.count(key) == 0) return -1;
        
        auto [storedKey, value] = *addresses[key];        // get value from values at keys address
        values.erase(addresses[key]);       // if found erase current place in list
        values.push_front({storedKey, value});           // now place at start of the list
        addresses[key] = values.begin();    // update the pointer of the value in the address map
                        
        return value;
    }
    
    void LRUCache::put(int key, int value) {
        if (addresses.count(key) == 1)
        {
            values.erase(addresses[key]);
        } else if (addresses.size() >= size)
            {
                auto [storedKey, _] = values.back();
                values.pop_back();

                addresses.erase(storedKey);
            }

        values.push_front({key, value});    // now place at start of the list
        addresses[key] = values.begin();    // update the pointer of the value in the address map
    }