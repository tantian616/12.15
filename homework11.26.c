#include<stdio.h>
int main()
{
    int a,b,c;
    for(a=0;a<=20;a++)
    for(b=0;b<=33;b++)
    for(c=0;c<=100;c+=3)
    if(a+b+c==100&&a*5+b*3+c/3==100&&c%3==0)
    printf("a=%d,b=%d,c=%d\n",a,b,c);
    return 0;
}