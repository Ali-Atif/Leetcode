class Solution {
public:
    int evalRPN(vector<string>& token) {
        stack<int>s;
        for(int i=0;i<token.size();i++){
         if(token[i]!="+" && token[i]!="-"&&token[i]!="*"&&token[i]!="/"){
             s.push(stoi(token[i]));
             }else if(token[i]=="+"){
             int a= s.top();
             s.pop();
             int b=s.top();
             s.pop();
             s.push(b+a);
         }else if(token[i]=="-"){
             int a= s.top();
             s.pop();
             int b=s.top();
             s.pop();
             s.push(b-a);
         }else if(token[i]=="*"){
             int a= s.top();
             s.pop();
             int b=s.top();
             s.pop();
             s.push(b*a);
         }else if(token[i]=="/"){
             int a= s.top();
             s.pop();
             int b=s.top();
             s.pop();
             s.push(b/a);
         }
        }
         return s.top() ;
    }
};