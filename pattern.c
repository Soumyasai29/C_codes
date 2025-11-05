#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("enter number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=5-i;j>=0;j--){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("* ");

        }
        printf("\n");
    }
    return 0;
}