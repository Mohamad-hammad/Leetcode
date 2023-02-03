class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low,high,mid;
        low =  0;
        high = nums.size()-1;
        while(high-low > 1)
        {
            mid = (high+low)/2;
            if (nums[mid] < target) 
            {
                low = mid + 1;
            }   
            else 
            {
                high = mid;
            }
        }
        if (nums[low] == target) 
        {
            return low;
        }
        else if (nums[high] == target) 
        {
          return high;
        }
        else 
        {
          return -1;
        }
    }
};