class Solution {
public:
    int trap(vector<int>& height) {
        int max=0;
        vector<int>maxleft;
        vector<int>maxright;
        for(int i=0;i<height.size();i++)
        {
            if(height[i]>max)
            {
                max = height[i];
                maxleft.push_back(max);
                
            }
            else if(height[i] == max)
            {
                maxleft.push_back(max);
            }
            else
                maxleft.push_back(max);
        }
        max=0;
        for(int i=height.size()-1;i>=0;i--)
        {
            if(height[i]>max)
            {
                max = height[i];
                maxright.push_back(max);
                
            }
            else if(height[i] == max)
            {
                maxright.push_back(max);
            }
            else
                maxright.push_back(max);
        }
        reverse(maxright.begin(),maxright.end());
        int area=0;
        for(int i=1;i<height.size()-1;i++)
        {
            int maxheightleft,maxheightright;
            int temp = min(maxleft[i], maxright[i]);
            area = area + temp-height[i];
            
            
        }
        return area;
    }
};