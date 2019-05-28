#include<stdio.h>
float area(int a)
{
return (3.14159*a*a);
}

int main()
{
int a;
float b;
b = area(a);
for(a = 3; a < 12; a = a + 1)
{
        float d;
        float e;
        e = area(d);
printf("Area: %f\n",e);
}
return 0;
}
