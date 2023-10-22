#include<stdio.h>
void primefact(int);
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    primefact(x);
    return 0;
}
void primefact(int x)
{
    int i;
    for(i=2;x!=1;i++)
    {
        while(x%i==0)
        {
            x=x/i;
            printf("%d, ",i);
        }
    }
}
