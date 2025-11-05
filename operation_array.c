#include<stdio.h>
int main(){
    int i,n;
    int product=1;
    int sum=0;
    printf("enter the number of the elements in array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n-1;i++){
        printf("enter the element");
        printf("%d",i+1);
        printf(":");
        scanf("%d",&arr[i]);

    }
    for(i=0;i<=n-1;i++){
        product=product*arr[i];

    }
    for(i=0;i<=n-1;i++){
        sum=sum+arr[i];

    }
    printf("product of the elements of array:%d",product);
    printf("sum of the element of array:%d",sum);
    return 0;
}