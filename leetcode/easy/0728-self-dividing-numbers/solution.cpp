class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>res;
        
        for(int i=left;i<=right;i++)
        {
            int num=i;
            bool self_dividing=true;
            while(num!=0)
            {
                if(num%10==0||i%(num%10)!=0)
                {
                    self_dividing=false;
                    break;
                }
                num=num/10;


            }
            if(self_dividing)
            res.push_back(i);
        }
        return res;
    }
};