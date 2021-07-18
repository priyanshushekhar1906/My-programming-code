#include<iostream>
#include<stack>
using namespace std;
int ParanthesisMatching(string exp,int size)
{
  
    stack <char> S;
    for (int i = 0; i<size; i++)
    {
        if(exp[i]=='(' || exp[i]=='[' || exp[i]=='{' )
        {
            S.push(exp[i]);
        }
        else if(exp[i]==')' || exp[i]==']' || exp[i]=='}')
        {
            if(S.empty())
            {
                return 0;
            }
            else{
                
            if(exp[i]==')')
            {
                exp[i]='(' ;
            }
           else if(exp[i]==']')
            {
                exp[i]='[' ;
            }
            else{
                 exp[i]='{' ;
            }
          

            if(exp[i]==S.top())
            {
                S.pop();
            }
            else{
                return 0;
            }
            }
        }
    }
    
    if(S.empty())
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    string exp="[(9+8)(7*5)]";
    // string exp="[()()]";

    if(ParanthesisMatching(exp,exp.length()))
    {
        cout<<"Paranthesis is Matching\n";
    }
    else{
        cout<<"Paranthesis is not Matching\n";
    }
    
    return 0; 
}