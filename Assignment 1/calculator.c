# include <stdio.h>
int main(){
  double a;
  double b;
  int choice;
  printf("Enter choice\n");
  printf("1.Addition\n");
  printf("2.Subtraction\n");
  printf("3.Multiplication\n");
  printf("4.Division\n");
  scanf("%d",&choice);
  if(choice>4 || choice<1){
    printf("Please select a valid choice.\n");}
    else{printf("Enter digits");
         scanf("%lf %lf",&a,&b);
  switch(choice)
  {
      case(1):
       printf("%lf+%lf=%.2lf\n",a,b,(a+b));
       break;
      case(2):
       printf("%lf-%lf=%.2lf\n",a,b,(a-b));
       break;
      case(3):
       printf("%lf*%lf=%.2lf\n",a,b,(a*b));
       break;
      case(4):
       if(b==0){
        printf("Math error");
       }
       else{
        printf("%lf / %lf=%.2lf\n",a,b,(a/b));}
       break;
       }
    }
 return 0;
}





