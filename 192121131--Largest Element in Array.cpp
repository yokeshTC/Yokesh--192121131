#include<stdio.h>
#define N 5  
  
void biggest(int *num, int n, int big)  
{  
    if(n < 0)  
        printf("Biggest element is %d\n", big);  
    else  
    {  
        if(*num > big)  
            big = *num;  
  
        biggest(++num, --n, big);  
    }  
}  
  
int main()  
{  
    int a[N], i;  
  
    printf("Enter %d integer numbers\n", N);  
    for(i = 0; i < N; i++)  
        scanf("%d", &a[i]);  
  
    biggest(a, N - 1, a[0]);  
  
    return 0;  
}  
