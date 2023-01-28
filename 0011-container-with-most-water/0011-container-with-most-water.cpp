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
/*
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
            if((min(height[start+1],height[end])*(end-start-1))>area)
                start++;
            else if ((min(height[start],height[end-1])*(end-1-start))>area)
                end--;
            else
                return area;
            
          
        }
        return area;
    }
                */