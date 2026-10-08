# include <stdio.h>
int main()
{
 //Initialization and declaration
 double area;
 const double PI=3.142;
 double r;
 //Information input and execution
 printf("Please provide radius");
 scanf("%lf",&r);
 area = PI*r*r;
 printf("Area of a circle is:%lf\n",area);
}
