#include<stdio.h>
int perm(int,int);
int fact(int);
int main()
{   int n, r;
     printf("Enter a  two number:");
     scanf("%d %d",&n,&r);
     perm(n,r);
     printf("%d",perm(n,r));
    return 0;

}
int fact(int n)
{
    int i, fact=1;
    for(i=1;i<=n;i++)
        fact=fact*i;
    return fact;
}
int perm(int n, int r)
{
    int p;
    p=fact(n)/fact(r);
    return p;
}
