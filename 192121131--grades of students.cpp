#include<iostream>
using namespace std;
int main()
{
	float x;
	float y;
	float z;
	float a;
	float avg;
	avg=x+y+z+a/4;
	cout<<"enter first subject marks"<<endl;
	cin>>x;
	cout<<"enter second subject marks"<<endl;
	cin>>y;
	cout<<"enter third subject marks"<<endl;
	cin>>z;
	cout<<"enter fourth subject marks"<<endl;
	cin>>a;
	avg=x+y+z/3;
	if (avg>=90)
	{
		cout<<"Result: grade is FIRST DIVISION"<<endl;
	}
	else if(avg>=70&&avg<90)
	{
		cout<<"Result: grade is SECOND DIVISION"<<endl;
	}
	else if(avg>=50&&avg<70)
	{
		cout<<"Result: grade is THIRD DIVISION"<<endl;
	}
	else
	{
		cout<<"Result: grade is FAIL"<<endl;
	}	
}