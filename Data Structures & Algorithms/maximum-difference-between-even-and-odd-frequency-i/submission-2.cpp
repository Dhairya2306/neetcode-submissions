class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int> mpp;
        int a1=INT_MAX;
        int a2=0;

        for(int i = 0;i<s.size();i++)
        {
            mpp[s[i]]++;
        }

        for(auto it : mpp)
        {
            if(it.second%2==0)
            {
                a1=min(a1,it.second);
            }else
            {
                a2=max(a2,it.second);
            }
        }
        if (a2 == 0 || a1 == INT_MAX) {
        return 0; 
    }
        int diff = a2-a1;
        return diff;
    }
};