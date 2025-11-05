#include<stdio.h>
int main(){
    int n,i,j;
    int choice;
    printf("enter number of element in array:");
    scanf("%d",&n);
    int a[n];
    printf("enter the value in array:\n");

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    printf("enter the choice for sorting(1 for ascending and 0 for descending):");
    scanf("%d",&choice);
    if(choice==1){
        for(i=0;i<n;i++){
            for(j=i+    1;j<n;j++){
                if(a[i]>a[j]){
                    int c=a[i];
                    a[i]=a[j];
                    a[j]=c;
                }
            }
        }
        printf("array sorted in ascending order:");
        for(i=0;i<n;i++){
            printf("%d\t",a[i]);
        }

    }
    else if(choice==0){
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(a[i]<a[j]){
                    int c=a[i];
                    a[i]=a[j];
                    a[j]=c;
                }
            }
        }
        printf("array sorted in descending order:");
        for(i=0;i<n;i++){
            printf("%d\t",a[i]);
        }
    }
    else{
        printf("invalid choice");
    }

}