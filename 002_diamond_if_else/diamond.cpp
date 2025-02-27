#include<iostream>
using namespace std;

int main(){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(i==0&(j==0|j==1|j==3|j==4) | i==1&(j==0|j==4) | i==4&(j==0|j==1|j==3|j==4) | i==3&(j==0|j==4)){
                cout<<" ";
                continue;
            }
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}