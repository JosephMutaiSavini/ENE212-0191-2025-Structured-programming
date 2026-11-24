# include<stdio.h>
// variable declaration
int buffer[5];
int size=sizeof(buffer)/sizeof(buffer[0]);
int next=0;
int count=0;

// function to insert new sample
void insertNumber(int number){
buffer[next]=number;
next=(next+1)%size;

// keeps track of the count
if(count<size)
    count++;
}

// function to print all the stored samples
void printNumber(){
printf("\nBuffer(Oldest to newest)");

int start;
if(count==size){
    start=next;
}
    else{
        start=0;
    }
// loop for printing the elements
for(int i=0;i<size;i++)
    printf("%d",buffer[(start+i)%size]);
}

int main(){
// variable declaration
 int number;
 // Loop that keeps the function running
 while(1){
    printf("\nEnter -1 to exit\nEnter number:");
    scanf("%d",&number);

    // termination of the function
    if(number==-1){
        break;
    }
        insertNumber(number);
        printNumber();

 }
 return 0;


}

