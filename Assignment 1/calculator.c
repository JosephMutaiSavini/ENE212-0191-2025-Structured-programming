# include <stdio.h>
int main(){
// Initialization and declaration
  double a;
  double b;
  int choice;
  //Display menu and choice input
  printf("Enter choice\n");
  printf("1.Addition\n");
  printf("2.Subtraction\n");
  printf("3.Multiplication\n");
  printf("4.Division\n");
  scanf("%d",&choice);
  //Input data analysis
  if(choice>4 || choice<1){
    printf("Please select a valid choice.\n");}
    //Digit input
    else{printf("Enter first digit:");
         scanf("%lf",&a);
         printf("Enter second digit:");
           scanf("%lf",&b);
  //Choice analysis using switch       
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





