class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int o = 0;
        for(int x : nums)
        {
            o ^= x;
        }
        return o;
    }
};
