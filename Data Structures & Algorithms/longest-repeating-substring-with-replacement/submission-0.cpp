class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> count(26, 0);
        
        int longest_substring = 0;
        int left = 0;
        int max_freq = 0;
        
        for (int right = 0; right < s.length(); right++) {
            // Add the current character to our frequency count
            // 'A' is subtracted to map characters to indices 0-25
            count[s[right] - 'A']++;
            
            // Update the maximum frequency character in the current window
            max_freq = max(max_freq, count[s[right] - 'A']);
            
            // If the characters we need to replace exceed k, shrink the window
            while ((right - left + 1) - max_freq > k) {
                count[s[left] - 'A']--;
                left++;
            }
            
            // Update the maximum valid window size
            longest_substring = max(longest_substring, right - left + 1);
        }
        
        return longest_substring;
    }
};
