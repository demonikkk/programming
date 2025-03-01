#include<iostream>
using namespace std;

int sumofdigits(int num){
    int sum;
    while(num>=10){
        sum=0;
        while(num>0){
            sum+=num%10;
            num/=10;
        }
        num=sum;
    }
    return num;
}

int main(){
    int num;
    cout<<"Enter any number: ";
    cin>>num;
    cout<<sumofdigits(num);

return 0;
}