class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;

        for(int i = 0;i<nums.size();i++)
        {
            int ti = abs(nums[i])-1;
            if(nums[ti]>0)
            {
                nums[ti]=-nums[ti];
            }
        }

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};