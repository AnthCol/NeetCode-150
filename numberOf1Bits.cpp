class Solution {
public:
    int hammingWeight(uint32_t n) {
        int val = 0; 

        while (n != 0)
        {
            if (n%2 == 1)
            {
                val += 1; 
            }
            n = n >> 1; 
        }

        return val; 
    }
};
