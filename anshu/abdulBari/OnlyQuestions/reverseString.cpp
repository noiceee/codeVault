#include <iostream>
#include <string>
using namespace std ; 

void reverseStr(string val){
    int j=val.length()-1; 
    for(int i=0 ; i<j ; i++ ,j--){
        char t=val[i];
        val[i] = val[j] ; 
        val[j] = t ; 
    }
    cout<<"Reverse String: "<<val;
}

int main(){
    string str ; 
    cout<<"Enter string: "; 
    cin>>str; 
    reverseStr(str);

}