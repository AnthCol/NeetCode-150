class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap; 
        vector<int> ans; 

        for (int i = 0; i < (int)nums.size(); i++){
            if (umap.find(nums[i]) == umap.end()){
                umap[nums[i]] = i; 
            }
            if (umap.find(target - nums[i]) != umap.end()){
                if (i != umap[target-nums[i]]){
                    ans.push_back(i); 
                    ans.push_back(umap[target-nums[i]]); 
                    break; 
                }
            }
        }
        return ans; 
    }
};
