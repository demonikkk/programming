#include<iostream>
using namespace std;

int sum(int a){
    int digit, sum=0;
    while(a>0){
        digit=a%10;
        sum=sum+digit;
        a/=10;
    }
    return sum;
}

int main(){
    int a;
    cout<<"Enter any number: ";
    cin>>a;
    cout<<"sum of digits are: "<<sum(a);

return 0;
}