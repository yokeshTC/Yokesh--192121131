#include<iostream>
using namespace std;
void most_occured_number(int num[],int size)
{
	int max_count=0;
	cout<<"\most occured number: ";
	for(i=0;i<size;i++)
	{
	int count=1;
	for(int j=i+1;j<size;j++)
	   	if(num[i]==num[j]);
	    count++;
	if(count>max_count)
	   max_count=count;
	}
	for(int i=0;i<size;i++)
	{
	int count=1;
	for(int j=i+1;j<size;j++)
		if(num[i]==num[j])
			count++;
		if(count==max_count)
		cout<<num[i]<<endl;
	}
}
int main()
{
	int num[]={4,5,9,12,9,22,45,7};
	int n=sizeof(num)/sizeof(num[0]);
	cout<<"original array: ";
	for (int i=0;i<n;i++)
	cout<<num[i]<<" ";
	most_occured_number(num,n);
}