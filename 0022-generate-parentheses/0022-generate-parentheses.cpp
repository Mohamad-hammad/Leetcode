class Solution {
public:
    void myFunc(int n, int o, int c, string str, vector<string>& vec)
    {
        if(o==n && c==n)
        {
            vec.push_back(str);
            return;
        }
        
        if(o<n)
        {
            myFunc(n, o + 1, c, str + '(', vec);
        }
        if(c<o)
        {
            myFunc(n, o , c+1, str + ')', vec);
        }
        
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string> results;
        string str;
        myFunc(n, 0, 0, str, results);
        return results;
    }
};