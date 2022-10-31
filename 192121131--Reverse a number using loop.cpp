#include<iostream>
using namespace std;
int main()
{
	int n,reminder,reverse=0;
	cout<< "enter a number: ";
	cin>>n;

	while(n!=0){
		reminder=n%10;
		reverse=reverse*10+reminder;
		n/=10;
	}
	cout<<"reverse=" << reverse;
	return 0;
} 