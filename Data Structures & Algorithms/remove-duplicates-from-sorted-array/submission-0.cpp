class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> mpp;
        vector<int> ans;
        for(int x : nums)
        {
            mpp[x]++;
        }

        for(auto it : mpp)
        {
            ans.push_back(it.first);
        }
        for(int i = 0 ; i<ans.size();i++)
        {
            nums[i]=ans[i];
        }
        int a = ans.size();
        nums.resize(a);
        sort(nums.begin(),nums.end());
        return a;
    }
};