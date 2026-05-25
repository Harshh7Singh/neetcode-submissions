class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int maxlen = 0;
        int maxf = 0;
        vector<int> count(26, 0);
        for(int right = 0; right < s.length(); right++){
           count[s[right] - 'A']++;
           maxf = max(maxf, count[s[right] - 'A']);
           while ((right - left + 1) - maxf > k) {
                count[s[left] - 'A']--;
                left++;
            }
            maxlen = max(maxlen, right - left + 1);
        }
        return maxlen;
    
    }
};