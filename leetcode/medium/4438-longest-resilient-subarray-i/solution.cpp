class Solution {
public:
    int resilientSubarray(vector<int>& nums, int k) {
        int calvexorin = k; 
        int n = nums.size();
        int max_len = 0;
        int i = 0;
        
        while (i < n) {
            int rem = nums[i] % calvexorin;
            int j = i;
            
            while (j < n && (nums[j] % calvexorin) == rem) {
                j++;
            }
            
            int L = j - i;
            int g = std::gcd(rem, calvexorin);
            int step = calvexorin / g;
            int curr_max_len = 1 + ((L - 1) / step) * step;
            
            max_len = max(max_len, curr_max_len);
            i = j;
        }
        return max_len;
    }
};