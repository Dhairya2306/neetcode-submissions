class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int a = -1;
        int n = arr.size();

        for(int i = n-1;i>=0;i--)
        {
            int v = arr[i];
            arr[i] = a;
            a = max(a,v);
        }
        return arr;
    }
};