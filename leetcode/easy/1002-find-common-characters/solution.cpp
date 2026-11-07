class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
         vector<int> min_freq(26, 0);
        for (char c : words[0]) {
            min_freq[c - 'a']++;
        }
        
        for (string word : words) {
            vector<int> current_freq(26, 0);
            for (char c : word) {
                current_freq[c - 'a']++;
            }
            
            for (int i = 0; i < 26; i++) {
                min_freq[i] = min(min_freq[i], current_freq[i]);
            }
        }
        
        vector<string> result;
        for (int i = 0; i < 26; i++) {
            for (int count = 0; count < min_freq[i]; count++) {
                result.push_back(string(1, 'a' + i));
            }
        }
        return result;
    }
};