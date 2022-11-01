#include<iostream>
using namespace std ;
int main ()
{
	char string[1000],rev[1000]
  	int vowels= 0,i,j,count=0;
  	cout<<"Enter the string: ";
  	cin>>str;
  	while (str[count]!=' ')
  	{
  		count++;
  	}
  	j=count-1;
  	for(i=0;i<count;i++)
  	{
  		rev[i]=str[j];
  		j--;
  	}
  	count<<rev;
   	for (i = 0; string[i]; i++)
   {
       if (string[i]=='a'||string[i]=='e'|| string[i]=='i'||string[i]=='o'|| string[i]=='u'||
       string[i]=='A'|| string[i]=='E'||string[i]=='I'|| string[i]=='O'||string[i]=='U')
       {
           vowels++;}
       }
       cout<<"vowels in the string will be = "<<vowels;
       return 0;
}
