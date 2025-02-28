#include<iostream>
using namespace std;

int sum(int arr[], int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main(){
    int arr[]={1, 2, 3, 4, 5};
    int size=5;
    cout<<sum(arr, size);
return 0;
}