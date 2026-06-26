class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> mpp;
        vector<int> ans;
        vector<int> t;
        for(int x:arr1)
        {
            mpp[x]++;
        }
        for(int i=0;i<arr2.size();i++)
        {
            while(mpp[arr2[i]]>0)
            {
                ans.push_back(arr2[i]);
                mpp[arr2[i]]--;
            }
        }
        for(auto it : mpp)
        {
            while(it.second>0)
            {
                t.push_back(it.first);
                it.second--;
            }
        }
        sort(t.begin(),t.end());
        for(int i : t)
        {
            ans.push_back(i);
        }
        return ans;
        
    }
};