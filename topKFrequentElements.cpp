class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> umap; 
        for (int i = 0; i < nums.size(); i++)
        {
            if (umap.find(nums[i]) == umap.end())
            {
                umap[nums[i]] = 1; 
            }
            else
            {
                umap[nums[i]] += 1; 
            }
        }

        priority_queue<pair<int, int>> max_heap; 
        for (auto it = umap.begin(); it != umap.end(); it++)
        {
            max_heap.push({it->second, it->first}); 
        }
        vector<int> ans; 

        for (int i = 0; i < k; i++)
        {
            ans.push_back(max_heap.top().second); 
            max_heap.pop(); 
        }

        return ans; 
    }
};
