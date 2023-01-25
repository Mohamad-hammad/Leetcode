class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> umap;
        vector<int> ans;
        for(int i=0;i<numbers.size();i++)
        {
            umap[numbers[i]] = i;
        }
        for(int i=0;i<numbers.size();i++)
        {
            int temp = target - numbers[i];
            if (umap.find(temp) != umap.end())
            {
                
                ans.push_back(i+1);
                ans.push_back(umap[temp]+1);
                return ans;
            }
        
        }
        return ans;
    }
};