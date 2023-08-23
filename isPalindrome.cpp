class Solution {
public:
    bool isPalindrome(string s) {

        string modified = ""; 

        for (int i = 0; i < s.length(); i++)
        {
            if (isalnum(s[i]))
            {
                if (isupper(s[i])) modified += tolower(s[i]); 
                else modified += s[i]; 
            }
        }

        for (int i = 0, x = modified.length() - 1; i < modified.length() / 2; i++, x--)
        {
            if (modified[i] != modified[x]) return false; 
        }

        return true; 
    }
};
