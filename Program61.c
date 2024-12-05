//WAP a program to read and display the elements of 2D Array(MAtrix).
#include<stdio.h>
int main(){
    int arr[4][4];

    printf("Enter 2D Array Elements : ");
    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<4 ; j++)
        {
            scanf(" %d",arr[i][j]);
        }
    }
    printf("2D array Elements are : /n");
    for(int i=0;i<;i++){
        for(int j =0;j<4;j++)
        {
            printf("%d",arr[i[j]]);
        }
        printf("\n");
    }
    
    return 0;
}