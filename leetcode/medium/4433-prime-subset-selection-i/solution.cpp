class Solution {
public:
    vector<int> maxPrimes(int n, int s) {
        if(n<2)
        return {};
        vector<bool> is_p(n+1,true);
        is_p[0]=is_p[1]=false;
        for(int i=2;i*i<=n;++i)
        {if(is_p[i])
        {
        for(int j=i*i;j<=n;j+=i)
        {
        is_p[j]=false;
        }
         }
          }
        vector<int>prime;
        for(int i=2;i<=n;i++)
        {
            if(is_p[i])
            {
                prime.push_back(i);
                
            }
        }
        vector<int>sel_p;
        long long curr_s=0;
        for(int p:prime)
            {
                if(curr_s+p<=s)
                {
                    curr_s+=p;
                    sel_p.push_back(p);
                }
                else{
                    break;
                }
            }
        return sel_p;
    }
};