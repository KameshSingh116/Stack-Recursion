#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int a=factorial(n);
    cout<<"The factorial is:"<<a<<endl;
    return 0;
}