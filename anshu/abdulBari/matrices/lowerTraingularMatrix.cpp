#include<iostream>
using namespace std ;

class lowerTri{
    int *A;
    int n;

    public: 
        lowerTri(int n){
            this->n=n;
            A=new int[n*(n+1)/2];
        }

        ~lowerTri(){
            delete []A;
        }

        void Display(bool row=true);


};