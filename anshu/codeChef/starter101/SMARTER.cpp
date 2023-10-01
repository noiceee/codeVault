#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    double l,v1,v2;
	    cin>>l>>v1>>v2;
	    double t1 ;
	    double t2;
	    t1 = l/v1;
	    t2 = l/v2;
	    if(v1>v2){
	        cout<<-1 <<endl;
	    }
	    else{
	        cout<<(ceil(t1) - ceil(t2))-1<<endl;
	    }
	}
	return 0;
}
