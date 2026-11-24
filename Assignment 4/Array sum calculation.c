# include <stdio.h>
int main(){
// Array declaration
int element[3];
element[0]=2;
element[1]=5;
element[2]=8;
int sum=0;

// loop to traverse through the array and find the sum
for(int i=0;i<3;i++){
    sum+=element[i];
}
printf("Sum of all the elements stored in the array is: %d",sum);
return 0;
}
