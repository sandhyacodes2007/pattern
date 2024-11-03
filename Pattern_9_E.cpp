#include<bits/stdc++.h>
using namespace std;
int main(){
    //Outer loop for the no.of rows.
    for(int i=0; i<n; i++){
        //for printing spaces before stars.
        for(int j=1; j<=n-i;j++){
            cout<<" ";

        }
        //for printing stars.
        for(int j=1; j<=2*i+1; j++){
            cout<<"*";
        }
       // for printing spaces after stars.
       for(int j=1; j<=n-i; j++){
        cout<<" ";
       }
       cout<<endl; 
    }
    //for inverse pattern.
    //Outer loop for the no. of rows.
    for(int i=0; i<n; i++){
        //for printing spaces before stars.
        for(int j=1; j<=i+1; j++){
            cout<<" ";
        }
        //for printing stars.
        for(int j=1; j<=2*n-2*i-1; j++ ){
            cout<<"*";
        }
        //for printing spaces after stars.
        for(int j=1; j<=i+1; j++){
            cout<<" "; 
        }
        cout<<endl; 
    }
}