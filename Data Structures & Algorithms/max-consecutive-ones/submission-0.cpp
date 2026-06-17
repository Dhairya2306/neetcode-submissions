class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i = 0;
        
        int count = 0;
        int maxcount = 0;
        while(i<nums.size())
        {
            if(nums[i]==1)
            {
                count++;
                i++;
                maxcount = max(maxcount,count);
            }else{
                count = 0;
                i++;
            }
        }
        return maxcount;
    }
};