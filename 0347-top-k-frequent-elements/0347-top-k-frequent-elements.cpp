class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         unordered_map<int, int> umap;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minheap;
        for(int i=0;i<nums.size();i++)
        {
            umap[nums[i]] ++;
        }
        
         for (auto& i : umap)
         {
             minheap.push({ i.second, i.first});
             if(minheap.size()>k)
             {
                 minheap.pop();
             }
         }
        vector<int> topK;
        for(int i=0;i<k;i++)
        {
            topK.push_back(minheap.top().second);
            minheap.pop();
        }
      
        return topK;
    }
};