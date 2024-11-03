#include<bits/stdc++.h>
using namespace std; 
int main(){
    for(int i=0; i<4; i++ ){
    //for printing stars before spaces.
    for(int j=1;j<=i+1; j++){
        cout<<"*"; 
    }
    //for printing spaces.
    for(int j=1; j<=2*4-2*i-2; j++){
        cout<<" ";
    }
    //for printing stars after spaces.
    for(int j=1; j<=i+1; j++){
        cout<<"*";
    }

    cout<<endl;
    }
    //for outer loop .
    for(int i =1; i<=4; i++){
        //for printing stars before space.
        for(int j=1; j<=4-i; j++){
            cout<<"*";
        }
            //for printing space.
            for(int j=1; j<=2*i; j++){
                cout<<" ";
            }
                //for printing star after space.
                for(int j=1; j<=4-i; j++){
                    cout<<"*";
                }
                cout<<endl;
            }   
                 }
    

    
    
