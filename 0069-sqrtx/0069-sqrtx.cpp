class Solution {
public:
    int mySqrt(int x) {
        long long start=0,end = INT_MAX,srqt = 0;
        while(start<=end)
        {
            long long mid = start + (end - start)/2;
            if(mid*mid<=x)
            {
                srqt = mid;
                start = mid +1; 
            }
            else
            {
                end = mid -1;
            }
        }
        return srqt;
    }
};