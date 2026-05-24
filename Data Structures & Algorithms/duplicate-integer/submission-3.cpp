class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool output = false;
        int L = 0;
        int R = nums.size();
        for(int i = 0;i<R;i++)
        {
         for(int j =i+1;j<R;j++)
         {
            if(nums[i]==nums[j])
            {
                output = true;
                break;
            }
         }
        }
        return output;
    }
};