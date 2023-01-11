class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        int w=0;
        int r=0;
        
        while(r<nums.size())
        {
            if(nums[w]==nums[r])
            {
                r++;
            }
            else
            {
                w++;
                nums[w]=nums[r];
                k++;
                r++;
            }
          
        }
        
        
        return k+1;
    }
};