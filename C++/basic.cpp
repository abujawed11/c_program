#include<iostream>

using namespace std;

int sum(int,int);
int main(){
    int num1,num2;
    cout<<"Enter a number: ";
    cin>>num1;
    cout<<"Enter 2nd number: ";
    cin>>num2;
    cout<<"The sum is: "<<sum(num1,num2);




    return 0;
}

int sum(int a,int b){
    return a+b;
}
