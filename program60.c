#include<stdio.h>
int main(){
    int arr[4][4]={{67,23,55,32},{48,38,91,76},{84,89,57,43},{39,59,64,72}};

    printf("2D Array Elements are : \n");
    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<4 ; j++)
        {
            printf(" %d",arr[i][j]);

        }
        printf("\n");
    }
    
    return 0;
}