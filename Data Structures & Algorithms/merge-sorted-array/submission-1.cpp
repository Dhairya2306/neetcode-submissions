class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a = nums1.size();
        for(int i = nums2.size()-1;i>=0;i--)
        {
            nums1.insert(nums1.begin(),nums2[i]);
        }
        nums1.resize(a);
        sort(nums1.begin(),nums1.end());
    }
};