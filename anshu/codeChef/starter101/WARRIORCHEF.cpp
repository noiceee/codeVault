#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,h;
	    cin>>n>>h;
	    vector<int> v(n);
	    long long int sum=0;
	    long long int s=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	        sum=sum+v[i];
	    }
	    int k=h;
	    if(sum<h)
	    {
	        cout<<0<<endl;
	    }
	    
	    else
	    {
	      sort(v.begin(),v.end(),greater<int>());
	      int i=0;
	      while(h>v[i])
	      {
	          h=h-v[i];
	          i++;
	      }
	      cout<<v[i]<<endl;
	    }

	}
	return 0;
}