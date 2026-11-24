# include <stdio.h>
int  main(){
// Array declaration
int element[3];
element[0]=25;
element[1]=45;
element[2]=21;


int length=sizeof(element)/sizeof(element[0]);
// variable declaration
int Digit=element[0];
int Digit1=element[0];
// loop to find the maximum digit
for (int i=0;i<length;i++){
    if(Digit<element[i]){
        Digit=element[i];
    }
}
 printf("Maximum element: %d\n",Digit);

 // loop to find the minimum digit
for( int i=0; i<length; i++){
    if(Digit1>element[i]){
        Digit= element[i];
    }
}
printf("Minimum element:%d",Digit1);
return 0;
}
