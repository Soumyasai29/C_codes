#include<stdio.h>
int main(){
    int n,i;
    int item;
    int check=1;
    printf("enter number of element in array:");
    scanf("%d",&n);
    int a[n];
    printf("enter the value in array:\n");

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    printf("enter the element in array for search:");
    scanf("%d",&item);
    for(i=0;i<n;i++){
        if(item==a[i]){
            check=1;
        }
        else{
            check=0;
        }
    }
    if(check==1){
        printf("item is in array");
    }
    else if(check==0){
        printf("item is not in array");
    }


}