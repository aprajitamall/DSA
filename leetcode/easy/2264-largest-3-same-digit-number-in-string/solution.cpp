class Solution {
public:
    string largestGoodInteger(string num) {
        int n=num.size();
        char maxD=0;
        for(int i=0;i<n-2;i++)
        {
            if(num[i]==num[i+1]&&num[i]==num[i+2])
            maxD=max(maxD,num[i]);
        }
        return(maxD==0)?"":string(3,maxD);
    }
};