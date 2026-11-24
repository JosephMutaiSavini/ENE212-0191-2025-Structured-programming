# include <stdio.h>
int main(){
// Array declaration
int element[4];
element[0]=1;
element[1]=8;
element[2]=7;
element[3]=10;

//size of the array
int length=sizeof(element)/sizeof(element[0]);

//variable declaration
int value=5;
int position=1;

// loop for traversing through the element positons
for (int i=length;i>position;i--){
    element[i]=element[i-1];
}
 element[position]=value;
 length++;
 printf("After inserting the element the new list is:");

//loop to give the output
 for(int i=0;i<length;i++){
    printf("%d",element[i]);
 }
 return 0;
}
