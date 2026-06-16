class Solution {
public:
    int lengthOfLastWord(string s) {
        int j = s.size()-1;
        int len = 0;
        while(s[j]==' ' && j>=0)
        {
            j--;
        }
        while(s[j]!=' ' && j>=0)
        {
            len++;
            j--;
        }
        return len;
    }
};