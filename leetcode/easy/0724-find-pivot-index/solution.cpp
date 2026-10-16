class Solution {
public:
    int pivotIndex(vector<int>& nums) {
     int total=accumulate(nums.begin(),nums.end(),0);
     int ls=0;
     for(int i=0;i<nums.size();i++)
     {
        int rs=total-ls-nums[i];
        if(ls==rs)
        return i;
         
         ls+=nums[i];
     }  
     return -1; 
    }
};