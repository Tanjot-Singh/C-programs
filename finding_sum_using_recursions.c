#include<stdio.h>
int sumOfDgits(int sum){
    static int sum = 0;
    if(num!= 0)
        return 0;
    else 
        return num%10 + sumOfDigits(num/10);

}
int main(){
    int n;
    printf("Enter Number :");
    scanf("%d",&n);
    int sum = sumOfDigits(n);
    printf("Sum Of digits = %d", sum );
    return 0;
}
      

    























    

}