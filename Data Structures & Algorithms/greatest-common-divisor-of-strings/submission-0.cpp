class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        // If they cannot be formed by repeating
        // the same base string
        if (str1 + str2 != str2 + str1)
            return "";
        
        // Length of the GCD string
        int len = gcd(str1.length(), str2.length());
        
        return str1.substr(0, len);
    }
};