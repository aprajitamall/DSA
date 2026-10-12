class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        vector<int>first_seen(26,-1);
        for(int i=0;i<s.length();i++)
        { 
          int idx=s[i]-'a';
          if(first_seen[idx]==-1)
          {
            first_seen[idx]=i;
          }
          else{ 
            int actual_distance=i-first_seen[idx]-1;
          if(actual_distance!=distance[idx])
          return false;
        }
        }
        return true;
    }
};