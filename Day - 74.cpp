LRU Cache

    class LRUCache
{
private:
    int capacity;
    std::list<std::pair<int, int>> cacheList;
    std::unordered_map<int, std::list<std::pair<int, int>>::iterator> cacheMap;

public:
    // Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap) : capacity(cap)
    {
    }

    // Function to return value corresponding to the key.
    int get(int key)
    {
        auto it = cacheMap.find(key);
        if (it == cacheMap.end())
        {
            return -1;
        }

        cacheList.splice(cacheList.begin(), cacheList, it->second);

        return it->second->second;
    }

    // Function for storing key-value pair.
    void put(int key, int value)
    {
        auto it = cacheMap.find(key);
        if (it != cacheMap.end())
        {
            it->second->second = value;
            cacheList.splice(cacheList.begin(), cacheList, it->second);
            return;
        }

        if (cacheMap.size() == capacity)
        {
            int irukey = cacheList.back().first;
            cacheMap.erase(irukey);
            cacheList.pop_back();
        }

        cacheList.emplace_front(key, value);
        cacheMap[key] = cacheList.begin();
    }