class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int,int> mpp;

        for(int i = nums2.size()-1;i>=0;i--)
        {
            int current = nums2[i];

            while(!st.empty() && st.top() <= current)
            {
                st.pop();
            }

            if(st.empty())
            {
                mpp[current]=-1;
            }else
            {
                mpp[current]=st.top();
            }

            st.push(current);
        }
        vector<int> ans;
    for(int num : nums1) {
        ans.push_back(mpp[num]);
    }

    return ans;

    }
};