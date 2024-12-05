//to find the maximun of N numbers
#include<stdio.h>
int main (){
    int n,num,max=0;
    printf("enter the value of N:");
    scanf("%d",&n);
    for (int i=0;i<=n;i++){
        printf("enter number:");
        scanf("%d",&num);
        if(num>max)
        max=num;
    }
    printf("max=%d",max);

    return 0;
}