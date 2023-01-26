class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        
        for(int i=0;i<nums.size();i++)
        {
            int start = i+1;
            int end = nums.size()-1;
            
            while(start<end && start<nums.size())
            {
                int sum =nums[i]+nums[start]+nums[end];
                if(sum == 0)
                {
                    vector<int>temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[start]);
                    temp.push_back(nums[end]);
                    ans.push_back(temp);
                    while(end!=0 && nums[end]==nums[end-1])
                        end--;
                    while(start!=nums.size()-1 && nums[start]==nums[start+1])
                        start++;
                    
                    start++;
                    end--;
                }
                else if(sum>0)
                {
                    while(end!=0 && nums[end]==nums[end-1])
                        end--;
                    end--;
                }
                else
                {
                     while(start!=nums.size()-1 && nums[start]==nums[start+1])
                        start++;
                    start++;
                }
                while(i!=nums.size()-1 && nums[i]==nums[i+1]) 
                    i++;
            }
            
           
        }
        return ans;
    }
};