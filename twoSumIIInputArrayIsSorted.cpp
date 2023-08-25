class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans; 

        for (int i = 0; i < numbers.size(); i++)
        {
            int current_targ = target - numbers[i]; 
            int left = i + 1; 
            int right = numbers.size() - 1; 

            while (left <= right)
            {
                int middle = floor((left + right) / 2); 
                if (current_targ > numbers[middle])
                {
                    left = middle + 1; 
                }
                else if (current_targ < numbers[middle])
                {
                    right = middle - 1; 
                }
                else
                {
                    ans.push_back(i + 1); 
                    ans.push_back(middle + 1); 
                    return ans; 
                }
            }
        }

        return ans; 
    }
};
