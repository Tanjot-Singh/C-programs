//wap to count number of  a given number
#include <stdio.h>
#include <math.h>

int main() {
    long long int num,   cnt=0  ;

    
    printf("Enter a number: ");
    scanf("%d", &num);

   // cnt =(int)log10(num)+1;     //find digits in given number using log10() function
   
   
    printf("number of digits is : %d",cnt);

    while(num!=0){
        num=num/10;
        cnt++;
    }

   
    return 0;
}
