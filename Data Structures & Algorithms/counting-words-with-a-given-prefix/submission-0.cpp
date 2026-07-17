class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
         int res = 0;
        for (string& w : words) {
            if (w.rfind(pref, 0) == 0) {
                res++;
            }
        }
        return res;
    }
};