/*#include <stdio.h>
int main()
{
    int sum, n;
    printf("enter thr value of n : ");
    scanf("%d", &n);

    sum = n * (n - 1) / 2;
    printf("sum of n number is:%d", sum);

    return 0;
}*/


#include <stdio.h>
int main() {  
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);  

    printf("ASCII value of %c = %d", c, c);
    
    return 0;
}


#include <stdio.h>
int main() {  
    int n , cube;
    printf("Enter a number: ");
    scanf("%d",&n);

    cube=n*n*n;
    printf("cube of the number is = %d",cube);
    
    return 0;
}

#include <stdio.h>
int main() {  
    int p,r,t,sp;
    
    printf("enter p : ");
    scanf("%d",&p);
    printf("enter r : ");
    scanf("%d",&r);
    printf("enter t : ");
    sacnf("%d",&t);

    sp = (p*(1+(r*t)));
    printf("simple interst is= %d",sp);

    
    return 0;
}