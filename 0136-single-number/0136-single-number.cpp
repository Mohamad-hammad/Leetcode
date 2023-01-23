class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int>single;
        for(int i=0;i<nums.size();i++)
        {
            vector<int>::iterator it;
            it= find(single.begin(),single.end(),nums[i]);
            if(it==single.end())
            {
                single.push_back(nums[i]);
            }
            else
            {
                 single.erase(it);
            }
        }
        return single[0];
    }
};