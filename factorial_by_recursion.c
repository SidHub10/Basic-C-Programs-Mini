#include <stdio.h>
long fact(int n)
{
    int product = 1;
    if (n>=1){
        product = n * fact(n - 1);
    return product;
    }
    else{
        return 1;
    }
    
}
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d", &n);
    printf("%d \n", fact(n));
    return 0;
}
