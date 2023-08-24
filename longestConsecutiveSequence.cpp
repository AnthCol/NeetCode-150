class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        set<int> s (nums.begin(), nums.end()); 

        int max = 0; 
        int count = 1; 
        int size = 0; 
        int prev = INT_MIN; 

        for (auto it = s.begin(); it != s.end(); it++)
        {
            if (*it - 1 == prev) count++; 
            else
            {
                if (count > max) max = count; 
                count = 1; 
            }
            prev = *it; 
            size += 1; 
        }

        if (size == 0) return 0; 

        
        return (count > max) ? count : max; 
    }
};
