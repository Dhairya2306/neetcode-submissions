class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> mpp;
        
        
        for(int x : nums) {
            mpp[x]++;
        }
        
        
        std::sort(nums.begin(), nums.end(), [&mpp](int a, int b) {
           
            if (mpp[a] != mpp[b]) {
                return mpp[a] < mpp[b];
            }
           
            return a > b;
        });
        
        return nums;
    }
};