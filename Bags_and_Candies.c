#include<stdio.h>
int main()
{
    int k,m,n,r,a,e,f,d;
    scanf("%d%d%d",&n,&k,&m);
    d=k*m;
    e=n%d;
    f=n/d;
    if(e>0)
    printf("%d",f+1);
    else
    printf("%d",f);
}