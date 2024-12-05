// wap to search a target value ina n arry linar search

#include<stdio.h>
int main(){
        int size , i;
        printf("enter array size : ");
        scanf("%d",&size);

        int arr[size],target,flag=0;
        printf("enter array element: ");

        //binary search 

        int size =0,end=size-1,mid;
        while(start<=end){
            mid = (start+end)/2;
            if (target==arr[mid]){
                flag=1;
                break;
            }
            else if(target>arr[mid])
            start=mid-1
        }
        if (flag==1){
            printf("element found at position %d",mid);
        }
        else
            printf("element not found");
        

       
    return 0;
}