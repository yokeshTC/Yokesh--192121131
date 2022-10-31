#include<stdio.h>
int main()
{
	int age;
	printf("enter age:");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("congratulations you are eligiable for vote");
	}
	else
	{
		printf("sorry! you are not eligiable for vote you need %d years to vote",18-age);
	}
	return 0;
}