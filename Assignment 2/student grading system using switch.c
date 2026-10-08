# include <stdio.h>
# include <ctype.h>
int main(){
 //Initialization and Declaration   
char name[20];
char registrationNumber[20];
int marks;
char grade;
const char *performance;
int i;
 //Loop to enter information for 4 students    
for(int i=1;i<=4;i++){
 //Information input   
printf("\nEnter information for student %d\n", i);
printf("Enter the name of the student:");
scanf("%19s",name);
 //Input data verification   
if(!isalpha(name[0])){
    printf("Invalid input!\n");
}
 //Information input   
printf("Enter the registration number of the student:");
scanf("%19s",registrationNumber);
 //Input data verification   
if(!isalnum(registrationNumber[0])){
    printf("Invalid input");
}
//Information input    
printf("Enter the Marks of the student:");
 //Input data verification   
if(scanf("%d",&marks)!=1){
    printf("Invalid input:\n");
    return 1;
}
 //Marks analysis using switch   
switch((int)marks){
case 70 ... 100:
    grade='A';
    break;
case 60 ... 69:
    grade='B';
    break;
case 50 ... 59:
    grade='C';
    break;
case 40 ... 49:
    grade='D';
    break;
case 0 ... 39:
    grade='F';
    break;
}
switch((int)marks){
case 40 ... 100:
    performance="Pass";
    break;
case 0 ... 39:
    performance="Fail";
    break;
}
//Final display of the student's performance 
printf("\n------------------------\n");
printf("\nStudent Information\n");
printf("\n------------------------\n");
printf("Name: %s\n",name);
printf("Registration number: %s\n",registrationNumber);
printf("Marks: %d\n",marks);
printf("Grade: %c\n",grade);
printf("Performance: %s\n",performance);
}

return 0;


}
