class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
        return 0;
        int  max_l=1;
        int count1=1,count2=1;
        for(int i=0;i<n-1;i++)
        {
          if(nums[i]<nums[i+1])
          {
            count1++;
            count2=1;
          }
          else if(nums[i]>nums[i+1])
          {
            count2++;
            count1=1;
          }
          else
          {
          count1=1;
          count2=1;
          }
max_l=max({max_l,count1,count2});
        }
        return max_l;
    }
};