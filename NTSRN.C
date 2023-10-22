#include<stdio.h>
void Nnumber(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    Nnumber(n);
    return 0;
}
void Nnumber(int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("%d ",i);

}
