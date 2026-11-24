# include<stdio.h>
int main(){
// array declaration
int element[5];
element[0]=2;
element[1]=7;
element[2]=4;
element[3]=5;
element[4]=9;
int length=sizeof(element)/sizeof(element[0]);

// loop for traversing through the elements in the array
for (int i=0; i<length; i++){
    for(int j=0;j<length-1;j++){

// checking for size of the elements
    if(element[j]>element[j+1]){
       int number=element[j];
       element[j]=element[j+1];
       element[j+1]=number;
        }
    }
}

// final output in ascending order
printf("Elements of the array sorted in ascending order:");
 for(int i=0;i<length;i++){
    printf("%d",element[i]);
 }

 return 0;
}
