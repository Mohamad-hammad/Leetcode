#include <algorithm>

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int carry =0;
        if(digits[digits.size()-1]==9)
        {
            reverse(digits.begin(), digits.end());
            digits[0] = 0;
            carry =1 ;
            for(int i =1; i < digits.size();i++)
            {
                if(digits[i]==9)
                {
                    digits[i] = 0;
                    carry = 1;
                }
                else
                {
                    digits[i] += carry;
                    carry = 0;
                    break;
                   
                }
                
            }
        }
        else
        {
            digits[digits.size()-1]++;
            return digits;
        }
        if(carry == 1)
            digits.push_back(1);
        reverse(digits.begin(), digits.end());
        return digits;
        
    }
};