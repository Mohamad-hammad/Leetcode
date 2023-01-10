class Solution {
public:
    bool isValid(string s) {
        stack<int> stack;
        //stack.push(s[0]);
        char pop;
        for(int i=0;i<s.length();i++)
        {
           
            if(s[i]==')')
            {
                if(stack.empty())
                    return false;
                pop = stack.top();
                if(pop=='(')
                    stack.pop();
                else
                    return false;
                
            }
            else if (s[i]==']')
            {
                if(stack.empty())
                    return false;
                pop = stack.top();
                if(pop=='[')
                    stack.pop();
                else
                    return false;
                
            }
            else if(s[i]=='}')
            {
                if(stack.empty())
                    return false;
                pop = stack.top();
                if(pop=='{')
                    stack.pop();
                else
                    return false;
                
            }
            else
                stack.push(s[i]);
           
        }
        if(stack.empty())
            return true;
        else
            return false;
            
    
    }
};