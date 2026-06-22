class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n = nums.size();
        int pairs = n/2;
        int paircount = 0;
        unordered_map<int,int> mpp;
        for(int i : nums)
        {
            mpp[i]++;
        }
        for(auto it : mpp)
        {
            paircount += (it.second/2);
        }

        return paircount == pairs;
    }
};