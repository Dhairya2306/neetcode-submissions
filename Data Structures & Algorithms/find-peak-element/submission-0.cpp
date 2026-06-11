class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int max_index = 0; // Assume the first element is the largest

for (int i = 1; i < nums.size(); i++) {
    if (nums[i] > nums[max_index]) {
        max_index = i; // Found a strictly larger number, update the index
    }
}

return max_index;
        
    }
};