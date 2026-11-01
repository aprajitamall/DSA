class Solution {
public:
    string toHex(int num) {
         if (num == 0) return "0";
    
    string hex_chars = "0123456789abcdef";
    string result = "";
    unsigned int n = num;
    
    while (n > 0) {
        int rem = n & 15;
        result += hex_chars[rem];
        n >>= 4;
    }
    
    reverse(result.begin(), result.end());
    return result;
    }
};