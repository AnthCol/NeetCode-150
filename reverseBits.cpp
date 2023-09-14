class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t rev = 0; 

        for (int i = 31; i >= 0; i--)
        {
            if (n % 2 == 1)
            {
                rev += pow(2, i); 
            }
            n = n >> 1; 
        }


        return rev; 
    }
};
