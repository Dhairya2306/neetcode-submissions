class Solution {
public:
    string largestGoodInteger(string num) {
        int nums = 0;
        string r = "";
        for(int i = 0;i<num.size()-2;i++)
        {
            if(num[i]==num[i+1] && num[i]==num[i+2])
            {
                string t = num.substr(i,3);
                if(nums <= stoi(t))
                {
                    nums = stoi(t);
                    r = t;
                }
            }
        }
        return r;
        
    }
};