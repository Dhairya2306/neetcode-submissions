class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n = details[1].size();
        int m = details.size();
        int count = 0;
        for(int i = 0;i<m;i++)
        {
            int tens = details[i][11] - '0';
            int ones = details[i][12] - '0';
            int value = (tens * 10) + ones;
            if(value>60)
            {
                count++;
            }
        }
        return count;
    }
};