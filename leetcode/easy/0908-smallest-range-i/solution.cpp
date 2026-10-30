class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int max_v=nums[0];
        int min_v=nums[0];
        for(int n:nums)
        {
            if(max_v<n)
            max_v=n;
            if(min_v>n)
            min_v=n;
        }
        int gap=max_v-min_v-(2*k);
        if(gap<0)
        return 0;
        else
         return gap;
    }
};