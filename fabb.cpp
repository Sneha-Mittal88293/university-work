#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a=0,b=1,fib=0;
    cout<<a<<" "<<b<<" ";
     for(int i=0;i<n;i++){
        fib = a+b;
        a=b;
        b=fib;
        cout<<fib<<" ";
    }
}
    



