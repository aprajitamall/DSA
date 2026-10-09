class Solution {
public:
    int minInsertions(string s) {
         int open = 0;
        int addition = 0;
        int n = s.length();
        
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                if (open < 0) {
                    addition++;
                    open = 0;
                }
                open += 2;
            } 
            else {
                if (i + 1 < n && s[i + 1] == ')') {
                    i++;
                } else {
                    addition++;
                }
                
                if (open > 0) {
                    open -= 2;
                } else {
                    addition++;
                }
            }
        }
        
        return addition + open;
    }
};
