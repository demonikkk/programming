#include<iostream>
using namespace std;

void reverse(int arr[], int size){
    for(int i=0; i<size/2; i++){
        swap(arr[i], arr[size -i -1]);
    }
}

int main(){
    int arr[5]={1, 2, 3, 4, 5};
    int size=5;
    reverse(arr,size);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
return 0;
}