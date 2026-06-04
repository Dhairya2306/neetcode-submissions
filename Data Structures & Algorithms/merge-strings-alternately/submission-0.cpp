class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int left = 0;
        string ans;

        while(left<word1.size() && left<word2.size())
        {
            ans.push_back(word1[left]);
            ans.push_back(word2[left]);
            left++;
        }


        while(left<word1.size())
        {
            ans.push_back(word1[left]);
            left++;
        }
        while(left<word2.size())
        {
            ans.push_back(word2[left]);
            left++;
        }

        return ans;
    }
};