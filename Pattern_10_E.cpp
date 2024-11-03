#include<bits/stdc++.h>
using namespace std;
int main(){
    //Outer loop for no. of rows.
    int stars='i';
    for(int i=0; i<2*4-1; i++){
//for printing stars.
if(i<4)stars=i+1;

for(int j=1; j<=stars; j++){
    cout<<"*";
}
//for inverse case.
for(int i=1; i<=4; i++){
    for(int j=1; j<=4-i; j++ ){
        cout<<"*";
    }
}
   
cout<<endl;
    }

    }
