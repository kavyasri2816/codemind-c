#include<stdio.h>
int main()
{
    int u;
    float c,t;
    scanf("%d",&u);
    if(u<200)
    {
        c=1.20;
    }
    else if(u>=200 && u<400)
    {
        c=1.50;
    }
    else if(u>=400 && u<600)
    {
        c=1.80;
    }
    else
    {
        c=2.00;
    }
    float b=u*c;
    if(b>400)
    {
        t=b+(b*0.15);
    }
    else 
    {
        t=b+100;
    }
    printf("%.2f",t);
}