class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> myset ;
        int longest = 0;
        int length = 0;
        copy(nums.begin(),nums.end(),inserter(myset, myset.end()));
        for(int i=0;i<nums.size();i++)
        {
            if (myset.find(nums[i]-1) == myset.end())
            {
                length = 0;
                while(myset.find(nums[i]+length)!= myset.end())
                {
                    length++;
                }
                if(length>longest)
                    longest = length;
            }
                
        }
        return longest;
      
    }
};

/*
vector<vector<int>> subseq;
        vector<int>::iterator it;
        int longest = 0;
        int length = 0;
        for(int i=0;i<nums.size();i++)
        {
            it = find(nums.begin(), nums.end(), nums[i]-1);
            if (it == nums.end())
            {
                length = 0;
                while(find(nums.begin(), nums.end(), nums[i]+length)!= nums.end())
                {
                    length++;
                }
                if(length>longest)
                    longest = length;
            }
        }
        return longest;
*/