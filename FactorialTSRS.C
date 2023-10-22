#include<stdio.h>
int factorial(int);
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    factorial(x);
    return 0;
}
int factorial(int x)
{
    int result=1,f;
    f=x;
    while(x)
    {
        result*=x;
        x--;
    }
    printf("factorial %d is %d",f,result);
    return 0;
}
