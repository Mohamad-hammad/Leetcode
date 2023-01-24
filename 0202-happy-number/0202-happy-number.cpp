class Solution {
public:
    bool isHappy(int n) {
        vector<int> vect;
        
        while(n!=1)
        {
            int current = n;
            int sum =0;
            while(current!=0)
            {
                sum += (current%10)*(current%10);
                current = current/10;
            }
            vector<int>::iterator it;
            it = find (vect.begin(), vect.end(), sum);
            if (it != vect.end())
            {
                return false;
            }
            else
                vect.push_back(sum);
            n = sum;

        }
        return true;
    }
};