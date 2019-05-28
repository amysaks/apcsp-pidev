#include <stdio.h>

int main()
{

  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  float d = 9;
  float e = 17;

  float* ptrtod = &d;
  float* ptrtoe = &e;

  printf("The value of d is %f\nThe address of d is %d\n", d, &d);
  printf("The value of e is %f\nThe address of e is %d\n", e, &e);

  float temp = *ptrtod;

  *ptrtod = *ptrtoe;

  *ptrtoe = temp;

}

Areaofcircle:




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
