# include <stdio.h>
int main()
{
 double area;
 const double PI=3.142;
 double r;
 printf("Please provide radius");
 scanf("%lf",&r);
 area = PI*r*r;
 printf("Area of a circle is:%lf\n",area);
}
