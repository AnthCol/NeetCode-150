class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        if (digits[digits.size() - 1] == 9)
        {
            int counter = digits.size() - 1; 
            while (counter >= 0 && digits[counter] == 9)
            {  
                digits[counter] = 0; 
                counter -= 1; 
            }

            if (counter < 0)
            {
                digits.push_back(0); 
                digits[0] = 1; 
            }
            else
            {
                digits[counter] += 1; 
            }
        }
        else
        {
            digits[digits.size() - 1] += 1; 
        }

        return digits; 
    }
};
