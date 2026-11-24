# include <stdio.h>
int main(){
// Array declaration
int element[3];
element[0]=2;
element[1]=5;
element[2]=7;
printf("The values stored into the array are:");

// loop that traverses through the array
for(int i=0;i<3;i++){
printf("%d",element[i]);
}
printf("\nThe values stored into the array in reverse are:");

// loop that traverses through the array and prints the elements in reverse
for(int i=2;i>-1;i--){
printf("%d",element[i]);
}
return 0;

}
