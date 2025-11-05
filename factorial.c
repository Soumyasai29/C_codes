#include<stdio.h>
int main(){
    int n,i;
    int fact=1;
    printf("enter the number to find the factorial:");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        fact=fact*i;
    }
    printf("factorial of number:%d",fact);
    return 0;
}