#include <iostream>
using namespace std;

int main() {
	
	int a[10];
	for(int i=0;i<10;i++)
	{
	    cin>>a[i];
	}
	for(int i=1;i<=10;i++)
	{
	   a[i]=a[i]+a[i-1];
	}
	for(int i=0;i<10;i++)
	{
	    cout<<a[i]<<" ";
	}
	int t, l,h;
	cout<<"enter t : ";
	cin>>t;
	cout<<"enter l and h ";
	while(t--)
	{
	    cin>>l>>h;
	    cout<<a[l]-a[h-1]<<endl;
	}
}