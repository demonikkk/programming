#include<iostream>
using namespace std;

void add(int arr1[], int arr2[], int arr[], int size){
    for(int i=0; i<size; i++){
        arr[i]=arr1[i]+arr2[i];
    }
} 

int main(){
    int arr1[]={1, 2, 3};
    int arr2[]={4, 5, 6};
    int size=3;
    int arr[size];
    add(arr1, arr2, arr, size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
return 0;
}