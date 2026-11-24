# include<stdio.h>
int main(){
// array declaration
int matrix[6][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{14,15,16,17},{18,19,20,21},{22,23,24,25}};

//variable declaration
int i;
int j;

// loop to traverse through the array
for(int i=0;i<6;i++){
    for(int j=0;j<4;j++){
printf("%d\n",matrix[i][j]);
    }
}
return 0;
}
