
#include<stdio.h>
int main(){
    int rowSize,colSize;
    printf("Enter The Nubmer of Rows :");
    scanf("%d%d",&rowSize,&colSize);
    int arr[rowSize][colSize];
    printf("Enter 2D Array Elements : ");
    for(int i=0 ; i<rowSize ; i++){
        for(int j=0 ; j<colSize ; j++)
        {
            scanf(" %d",arr[i][j]);
        }
    }
    printf("2D array Elements are : /n");
    for(int i=0;i<rowSize;i++){
        for(int j =0;j<colSize;j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}