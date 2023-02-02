#include <string>  
class Solution {
public:
    int evalRPN(vector<string> tokens) {
        stack<int> stack;
        int i=0;
        while(i<tokens.size())
        {
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/")
            {
                stack.push(std::stoi(tokens[i]));
            }
            else
            {
                int num2 = stack.top();
                stack.pop();
                int num1 = stack.top();
                stack.pop();
                if(tokens[i] == "+")
                {
                    stack.push(num1+num2);
                }
                else if(tokens[i] == "-")
                {
                    stack.push(num1-num2);
                }
                else if(tokens[i] == "*")
                {
                    stack.push(num1*num2);
                }
                else 
                {
                    stack.push(num1/num2);
                }
               
            }
            i++;
        }
        return stack.top();
    }
};