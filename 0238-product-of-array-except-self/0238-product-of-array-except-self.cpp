class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> newvec;
        newvec.push_back(1); 
        newvec.push_back(nums[0]); 
        for(int i=2;i<nums.size();i++)
        {
           newvec.push_back(nums[i-1]*newvec[i-1]);   
        }
        reverse(nums.begin(), nums.end());
        vector<int> newvec2;
        newvec2.push_back(1); 
        newvec2.push_back(nums[0]); 
        for(int i=2;i<nums.size();i++)
        {
           newvec2.push_back(nums[i-1]*newvec2[i-1]);   
        }
        
        reverse(newvec2.begin(),newvec2.end());
        reverse(nums.begin(),nums.end());
        
        for(int i=0;i<newvec2.size();i++)
        {
            newvec[i] = newvec[i]*newvec2[i];
        }
        
        
        return newvec;
    }
};