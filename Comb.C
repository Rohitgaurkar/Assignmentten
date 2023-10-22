#include<stdio.h>
int comb(int,int);
int fact(int);
int main()
{   int n, r;
     printf("Enter a  two number:");
     scanf("%d %d",&n,&r);
     comb(n,r);
     printf("%d",comb(n,r));
    return 0;

}
int fact(int n)
{
    int i, fact=1;
    for(i=1;i<=n;i++)
        fact=fact*i;
    return fact;
}
int comb(int n, int r)
{
    int c;
    c=fact(n)/(fact(r)*fact(n-r));
    return c;
}
