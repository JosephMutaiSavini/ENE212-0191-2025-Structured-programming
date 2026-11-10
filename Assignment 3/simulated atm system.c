#include <stdio.h>
#include <string.h>
// variable declaration
int balance = 6000;
// Deposit function
int deposit(){

int amount1;
 printf("Enter amount you wish to deposit:\n");
 scanf("%d",&amount1);

 if(amount1>0){
    balance+=amount1;
    printf("Deposit successful.\n");
    printf("Your current balance is:%d\n",balance);
 }
  else{
    printf("Invalid input.\n");
}
 return 1;
}
// Withdraw function
int withdraw(){

  int amount;
  printf("Enter amount you wish to withdraw:\n");
  scanf("%d",&amount);

  if(amount>0 && amount<=balance){
    balance-=amount;
    printf("Withdrawal successful\n");
    printf("Your current balance is:%d\n",balance);
  }
  else{
    printf("Invald input.\n");
  }
 return 1;
 }
// Balance funtion
int checkbalance(){
 printf("Your current balance is:%d\n",balance);
 return 1;
}
// Exit system function
int exit_program(){
 printf("Thank you for using our services.\n");
 return 1;
}
// Login function
int log_in(){
// variable declaration
 char correctpin[]="1234";
 char userpin[5];
// loop that gives the user 3 tries
 for(int tries=1;tries<=3;tries++){
// pin input
 printf("Enter userpin to access account:");
 scanf("%4s",&userpin[0]);
//pin verification
 if(strcmp(correctpin,userpin)==0){
  printf("Access granted!\n");
  return 1;
 }
 else {
  printf("Incorrect pin.You have %d tries remaining\n",3-tries);

 }
 }
 printf("You have reached the maximum number of tries.");
 return 0;
 }

int main(){
// variable declaration
int choice;
 // calling login function
 if(log_in()==1){
 // loop to keep the system running until I choose to exit
 do{
  // display menu
    printf("\n=====System menu=====\n");
    printf("1.Balance inquiry\n");
    printf("2.Deposit\n");
    printf("3.Withdraw\n");
    printf("4.Exit\n");
// Selecting of option
  printf("Select option:");
  scanf("%d",&choice);
  // functionality of the display menu and calling of the functions
  switch(choice){
  case 1:
      checkbalance();
      break;
  case 2:
    deposit();
    break;
  case 3:
    withdraw();
    break;
  case 4:
      exit_program();
      break;
  default:
    printf("Invalid input.\n");
  }
 }while(choice!=4);
 }
 return 0;


}
