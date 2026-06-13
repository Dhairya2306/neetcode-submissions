class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
    vector<int> ans(n, 0); // Initialize with 0s by default
    
    int totalProductWithoutZero = 1;
    int zeroCount = 0;

    // First pass: Count zeros and find product of all non-zero numbers
    for (int x : nums) {
        if (x == 0) {
            zeroCount++;
        } else {
            totalProductWithoutZero *= x;
        }
    }

    // Second pass: Populate the answer array based on zero count
    for (int i = 0; i < n; i++) {
        if (zeroCount == 0) {
            // No zeros: Safe to divide total product by current element
            ans[i] = totalProductWithoutZero / nums[i];
        } 
        else if (zeroCount == 1) {
            // One zero: Only the zero element gets a non-zero product
            if (nums[i] == 0) {
                ans[i] = totalProductWithoutZero;
            } else {
                ans[i] = 0; // Already 0, but explicit for clarity
            }
        } 
        else {
            // More than one zero: Everything becomes 0
            ans[i] = 0;
        }
    }

    return ans;
    }
};
