class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> ans;
        int count = 0;
        for(int i : heights)
        {
            ans.push_back(i);
        }
        sort(ans.begin(),ans.end());
        for(int i = 0;i<heights.size();i++)
        {
            if(heights[i]!=ans[i])
            {
                count++;
            }
        }
        return count;
    }
};