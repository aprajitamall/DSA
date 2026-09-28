class Solution {
public:
// solution
    int maxDepth(string s) {
        int max_d=0;
        int curr_d=0;
        for(char ch:s)
        {
           if(ch=='(')
           {
            curr_d++;
            max_d=max(max_d,curr_d);
           }
           else if(ch==')')
           curr_d--;

        }
        return max_d;
        
    }
};