#include<iostream>
using namespace std;

void rotate(int arr[], int size){
    int temp=arr[0];
    for(int i=0; i<size; i++){
        arr[i]=arr[i+1];
    }
    arr[size-1]=temp;
}

int main(){
    int arr[]={1, 2, 3, 4, 5};
    int size=5;
    int k;
    cin>>k;
    for(int i=1; i<=k; i++){
        rotate(arr, size);
    }
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
return 0;
}