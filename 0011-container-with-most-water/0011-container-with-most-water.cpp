class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size()-1;
        int area;
        int maxarea=0;
        while(start<end)
        {
            area = min(height[start],height[end])*(end-start);
            if(area>maxarea)
                maxarea=area;
            if(height[start]>height[end])
                end--;
            else
                start++;
            
          
        }
        return maxarea;
    }
};
