#include<stdio.h>
#define pi 3.1415926
void main()
{
  float r;
  float s;
  float c;
  printf("please input the r of the circle: \n");
  scanf("%f",&r);
  c=2*r*pi;
  s=pi*r*r;
  printf("c = %f\n s = %f\n the end.",c,s);
}
