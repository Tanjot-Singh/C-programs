//wap to check a given number is pallindrome or not
int main() {
    int num, reversedNum = 0, remainder, temp;

    printf("Enter an integer: ");
    scanf("%d", &num);

    
    while (num != 0) {
        remainder = num % 10;  
        reversedNum = reversedNum * 10 + remainder;  
        num /= 10;  
    }
    if(temp==reversedNum){
        printf("it is pallindrome ");
    }
    else{
        printf("it is not pallindrome");
    }
   
    printf("Reversed Number: %d\n", reversedNum);

    return 0;
}
