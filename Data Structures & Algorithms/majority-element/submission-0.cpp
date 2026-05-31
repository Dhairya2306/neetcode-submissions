class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int maxfreq = 0;
        int element = 0;
        for(int i = 0; i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        for(auto it : mpp)
        {
            if(it.second>nums.size()/2)
            {
                return it.first;
            }
        }
        return -1;

    }
};