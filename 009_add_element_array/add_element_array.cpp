#include<iostream>
using namespace std;

void addinarray(int arr[], int size){
    arr[size-1]=arr[size-1]+1;
}

int main(){
    int arr[]={1, 2, 3};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    addinarray(arr, size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
return 0;
}