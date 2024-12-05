// wap to search a target value in a array linar search

#include<stdio.h>
int main(){
        int size , i;
        printf("enter array size : ");
        scanf("%d",&size);

        int arr[size],target,flag=0;
        printf("enter array element: ");

        for( i=0; i<size;i++){
            sacnf("%d",&arr[i]);
        }
        printf("enter searching element : ");
        scanf("%d",&target);

        for( i=0;i<size ; i++){
            if(target == arr[i]){
                flag=1;
                break;
            }
        }
        if (flag==1){
            printf("element found at position %d",i);
        }
        else
            printf("element not found");
        

    return 0;
}