# include <stdio.h>
# include <ctype.h>
int main(){
//Initialization and declaration    
char name[20];
char registrationNumber[20];
int marks;
char grade;
const char *performance;
int i;
// Loop to enter information for 4 students    
for(int i=1;i<=4;i++){
//Information input    
printf("\nEnter information for student %d\n", i);
printf("Enter the name of the student:");
scanf("%19s",name);
//Data verificatiom    
if(!isalpha(name[0])){
    printf("Invalid input!\n");
}
 //Information input   
printf("Enter the registration number of the student:");
scanf("%19s",registrationNumber);
 // Data verification   
if(!isalnum(registrationNumber[0])){
    printf("Invalid input");
}
 //Information input   
printf("Enter the Marks of the student:");
 // Data verification   
if(scanf("%d",&marks)!=1){
    printf("Invalid input:\n");
    return 1;
}
 // Marks analysis  
if(marks>=70 && marks<=100){
    grade='A';
}
else if(marks>=60 && marks<=69){
    grade='B';
}
else if(marks>=50 && marks<=59){
    grade='C';
}
else if(marks>=40 && marks<=49){
    grade='D';
}
else if(marks<40){
    grade='F';
}
if(marks>39){
    performance="Pass";
}
else{
    performance="Fail";
}
// Final display of the information   
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

