
#include<stdio.h>
int main(){
    int n,i=1,sum=0;
    printf("Enter n= ");
    scanf("%d",&n);
    
    for ( i = 1; i <= n; i++)
    {
        sum=sum+i;
    }
    
    
    printf("Sum of 1 to %d= %d",n,sum);
    return 0;
}