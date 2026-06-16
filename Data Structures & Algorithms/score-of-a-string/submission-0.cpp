class Solution {
public:
    int scoreOfString(string s) {
        int score =0;
        int i = 0;
        int j = 1;

        while(i<s.size() && j<s.size())
        {
            score += abs(s[j]-s[i]);
            i++;
            j++;
        }
        return score;
    }
};