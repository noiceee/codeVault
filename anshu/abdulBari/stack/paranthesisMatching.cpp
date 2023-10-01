#include<iostream>
#include<string>
#include<stack>

using namespace std ; 

int main(){
    char x;
    string str ; 
    cin>>str;
    stack<char> s;

    for(int i=0 ; i<str.length();i++){
        if(str[i]=='(' || str[i]=='[' || str[i]=='{'){
            s.push(str[i]);
        }
        x = s.pop();
        else if(str[i]=='}'){
            s.pop();
        }
    }
}