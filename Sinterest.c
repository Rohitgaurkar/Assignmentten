#include<stdio.h>
 int sinterest(float,float,float);
int main()
{
    float p,r,t;
    printf("Enter a borrow money:");
    scanf("%f",&p);
     printf("Enter a Rate: ");
    scanf("%f",&r);
     printf("Enter a loan period: ");
    scanf("%f",&t);
    sinterest(p,r,t);
    return 0;
}
int sinterest(float p,float r,float t)
{
    float i;
    i=p*r*t/100;
    printf("Simple interest is=%f",i);
    return 0;
}

