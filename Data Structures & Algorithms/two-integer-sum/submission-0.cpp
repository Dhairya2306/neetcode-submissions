class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> s;
        for(int i=0;i<nums.size();i++)
        {
            int complement = target - nums[i];
            auto it = find(nums.begin()+i+1,nums.end(),complement);
            if(it!=nums.end())
            {
                s.push_back(i);
                s.push_back(it - nums.begin());
                return s;
            }
        }
        return s;
    }
};
