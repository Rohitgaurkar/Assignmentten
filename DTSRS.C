#include<stdio.h>
int num(int, int);
int main()
{
    int n,digit;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Enter a digit:");
    scanf("%d",&digit);
    num(n,digit);
    printf("%d",num(n,digit));
    return 0;

}
int num(int n, int digit)
{
    int rem;
    while(n)
    {
       rem=n%10;
       if(rem==digit)
        return 1;
      n=n/10;

    }
    return 0;
}
