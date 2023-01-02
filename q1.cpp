// Accepted link

// https://leetcode.com/problems/evaluate-reverse-polish-notation/submissions/869592358/

// code:-

/*
class Solution {
public:
    int evalRPN(vector<string>& token) {
        stack<int>s;
        for(int i=0;i<token.size();i++)
        {
            if(token[i]!="+" && token[i]!="-" && token[i]!="*" && token[i]!="/")
            {
                s.push(stoi(token[i]));
                continue;
            }
            else
            {
                int b=s.top();
                s.pop();
                int a=s.top();
                s.pop();
                if(token[i]=="+")s.push(a+b);
                else if(token[i]=="-")s.push(a-b);
                else if(token[i]=="*")s.push(a*b);
                else s.push(a/b);
            }
        }
        return s.top();
    }
};
*/