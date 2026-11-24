# include <stdio.h>
int main(){
// Array declaration
int element[4];
element[0]=3;
element[1]=2;
element[2]=2;
element[3]=5;


int length= sizeof(element)/sizeof(element[0]);

// loop to traverse through the array
for(int i=0;i<length;i++){
    int count=0;
for(int j=0; j<length;j++){
    // comparison of the elements
    if(element[i]==element[j]){
    count++;
    }
}
if(count==1){
    printf("The unique elements found in the array are:%d\n",element[i]);
}
}
return 0;
}

