#include<stdio.h>
int main(){

int x= 5;
int y = ++x  + x++ + x++ ;
printf("y=%d",y);


    return 0;
}