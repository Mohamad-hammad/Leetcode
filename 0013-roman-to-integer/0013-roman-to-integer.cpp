#include <bits/stdc++.h>
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> umap;
        umap['I'] = 1;
        umap['V'] = 5;
        umap['X'] = 10;
        umap['L'] = 50;
        umap['C'] = 100;
        umap['D'] = 500;
        umap['M'] = 1000;
        int result = umap.at(s[s.length()-1]);
        for(int i = s.length()-2;i>=0;i--)
        {
            if(umap.at(s[i]) < umap.at(s[i+1]))
               result -= umap.at(s[i]);
            else
                result += umap.at(s[i]);
        }
        return result;
    }
};
