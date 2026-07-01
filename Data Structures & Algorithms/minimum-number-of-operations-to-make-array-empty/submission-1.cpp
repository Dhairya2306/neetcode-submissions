class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> mpp;
    for (int x : nums) {
        mpp[x]++;
    }
    
    int count = 0;

    for (auto it : mpp) {
        int freq = it.second;
        
        
        if (freq == 1) {
            return -1;
        }
        
        
        count += (freq + 2) / 3;
    }
    
    return count;
    }
};