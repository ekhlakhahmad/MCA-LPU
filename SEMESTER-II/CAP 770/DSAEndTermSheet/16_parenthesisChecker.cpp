#include<iostream>
#include<stack>
using namespace std;

bool isParenthesisBalanced(string expression){
    stack<char> stk;

    for (int i = 0; i < expression.length();i++){
        if(stk.empty()){
            stk.push(expression[i]);
        }else if((stk.top()=='(' && expression[i]==')') || (stk.top()=='[' && expression[i]==']' || (stk.top()=='{' && expression[i]=='}'))){
            stk.pop();
        }else{
            stk.push(expression[i]);
        }
    }
    if(stk.empty())
        return true;

    return false;
}
                    
int main(){

    string str = "{{}[]()}";

    if(isParenthesisBalanced(str))
        cout << "It is Balanced" << endl;
    else
        cout << "It is not Balanced" << endl;

    return 0;
}