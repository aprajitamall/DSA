class Solution {
    private:
    bool isvalid(string &s)
    { int count=0;
        for(char c:s)
        {
            if(c=='(')
            {
              count++;
            }
            else if(c==')')
            {
                count--;
                if(count<0)
        return false;
            }
        }
        return count==0;
    }
public:
    vector<string> removeInvalidParentheses(string s) {
        vector<string>result;
        queue<string>q;
        unordered_set<string>visited;
        q.push(s);
        visited.insert(s);
        bool found=false;
        while(!q.empty())
        {
            int level_size=q.size();
            for(int i=0;i<level_size;i++)
            {
                string current=q.front();
                q.pop();
                if(isvalid(current))
                {
                    result.push_back(current);
                    found=true;
                }
                if(found)
                continue;
            
            for (int j = 0; j < current.length(); ++j) {
                    if (current[j] != '(' && current[j] != ')') continue;
                    
                    std::string next_state = current.substr(0, j) + current.substr(j + 1);
                    
                    if (visited.find(next_state) == visited.end()) {
                        visited.insert(next_state);
                        q.push(next_state);
                    }
                }
        }
                if(found)
                return result;
        }
        return result.empty() ? std::vector<std::string>{""} : result;

    }
};