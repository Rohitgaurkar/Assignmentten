#include<stdio.h>
int number(int);
int main()
{
    int x,even;
    printf("Enter a number:");
    scanf("%d",&x);
    even=number(x);
    printf(" return %d",even);
    return 0;

}
int number(int x)
{
    if(x%2==0)
    {
         printf("even number:");
        return 1;
    }
    else
    {
        printf("odd number:");
        return 0;
    }



}
