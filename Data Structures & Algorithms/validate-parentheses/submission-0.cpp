class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> mp = {{')','('},{']','['},{'}','{'}};

        stack<char> st;

        for(char ch : s)
        {
            if(mp.count(ch))
            {
                if(st.empty()|| st.top()!=mp[ch])
                {
                    return false;
                }
                st.pop();
            }else{
                st.push(ch);
            }
        }
        return st.empty();
    }
};
