#include<bits/stdc++.h>
using namespace std; 
int main(){
    //Outer loop for number of rows.
    for(int i=0; i<5;i++){
//for printing stars.
for(int j=1; j<5-i; j++){
    cout<<'*'; 

}
//for printing space after stars.
for(int j=1; j<2*i; j++){
    cout<<" ";
}
//for printing stars after spaces.
for(int j=1; j<5-i; j++){
    cout<<"*"; 

}
//Inverse star printing.
for(int i=0; i<5; i++){


//for printing stars.

for(int j=1; j<=i+1; j++){
    cout<<'*';

}
//for printing spaces.
for(int j=1; j<=2*5-2*i-2; j++){
    cout<<" "; 
}
//for printing stars after spaces.
for(int j=1; j<=i+1; j++ ){
    cout<<"*";
}
cout<<endl; 

    }
}
}