#include "topKFrequent.h"

std::vector<int> topKFrequent::topKFrequentElem(std::vector<int>& nums, int k)
{
    int n = nums.size();
    std::unordered_map<int, int> frequency;   

    for (int num : nums) {
        frequency[num]++;
    }

    std::vector<std::vector<int>> buckets(n + 1);  
    for (auto& [num, freq] : frequency) {
        buckets[freq].push_back(num);
    }

    std::vector<int> result;
    
    for (int i = n; i > 0 && result.size() < k; --i) {
        for (int num : buckets[i]) {
            result.push_back(num);
            if (result.size() == k) return result;
        }
    }
    
    return result;
}