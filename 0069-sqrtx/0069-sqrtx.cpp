class Solution {
public:
    int mySqrt(int x) {
        for(long long i = 1; i<=x;i++)
        {
            
           if(i*i>x)
           {
               return i-1;
           }
            else if(i*i == x)
            {
                return i;
            }
        }
        return x;
    }
};

/*

8 = 8%2 = 0 , 2 x 2 ( if not ) 
                        then 8%3 , 5* 3 = 15

3 = 3%1 = 0, 1x1
3 % 2 = 1 ; 1x2 !> 3
3 %3 = 0 ; 3x3 

 int mod = x%i ;
            if(mod == 0)
            {
                if(i*i == x)
                    return i;
                else if(i*i>x)
                    return i-1;
            }
            else if(mod*i>x)
                return i-1;
*/