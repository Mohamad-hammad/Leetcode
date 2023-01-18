class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> umap;
        string temp;
        for(int i=0;i<strs.size();i++)
        {
            temp = strs[i];
            sort(strs[i].begin(),strs[i].end());
            umap[strs[i]].push_back(temp);
        }
        vector<vector <string>> result;
        for(auto itr = umap.begin();itr!=umap.end();++itr)
        {
            result.push_back(itr->second);
        }
        return result;
        
    }
};