class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v; 
        int count = 0; 

        for (int i = 0; i <= n; i++)
        {   
            int temp = i;
            while (temp != 0)
            {
                if (temp%2 == 1)
                {
                    count += 1; 
                }
                temp = temp >> 1; 
            }

            v.push_back(count); 
            count = 0; 
        }

        return v; 
    }
};
