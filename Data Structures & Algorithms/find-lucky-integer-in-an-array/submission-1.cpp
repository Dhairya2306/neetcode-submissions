class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mpp;
        int maxnum = -1;
        for(int i : arr)
        {
            mpp[i]++;
        }
        for(auto it : mpp)
        {
            if(it.first==it.second)
            {
                maxnum = max(maxnum,it.first);
            }
        }
        return maxnum;
    }
};