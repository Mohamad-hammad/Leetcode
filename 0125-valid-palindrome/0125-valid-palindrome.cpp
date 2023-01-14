#include <cctype>
class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.length()-1;
        while(start < end)
        {
            
            if( ((isalpha(s[start]) || isdigit(s[start]))) && (isalpha(s[end]) || isdigit(s[end]))) 
            {
                if(tolower(s[start]) != tolower(s[end]))
                {
                    return false;
                }
                start++;
                end--;
                 
            }
            else if(isdigit(s[start])==false && isalpha(s[start])==false)
            {
                   start++;
            }
            else if(isdigit(s[end])==false && isalpha(s[end])==false)
               {
               end--;
           }
        }
               return true;
    }
};