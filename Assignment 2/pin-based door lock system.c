#include <stdio.h>
#include <string.h>
# include <windows.h>

int main() {
// Initialization and declaration    
    char correctPin[] = "1234";
    char userPin[20];
    int choice;
    int countdown;
 //Loop that gives user three tries if the pin is wrong.   
 for(int tries=1;tries<=3;tries++){
 //Pin input
        printf("Enter user pin: ");
        scanf("%19s", userPin);
  // Checks if the pin is correct   
    if (strcmp(correctPin, userPin) == 0){
    //Display menu
            printf("\n=== Device Menu ===\n");
            printf("1.Open Door.\n");
            printf("2.Change username.\n");
            printf("3.Change pin.\n");
            printf("4.Exit.\n");
//Choice input
        printf("Select choice:");
        scanf("%d",&choice);
 //Functionality of the menu options       
          switch(choice){
           case 1:
            printf("Access granted. Door unlocked.");
            return 0;
          case 2:
           printf("Change username feature coming soon.");
           return 0;
          case 3:
           printf("Change pin feature coming soon.");
           return 0;
          case 4:
           printf("Exiting system");
           return 0;
          default:
           printf("Invalid option. Please try again.");
           break;
         }
    }
 //Pin length verification    
   else if(strlen(userPin)!=4)
        printf("Pin length must be 4 digits");
   else{
        printf("Access denied.");
    }
   //Checking number of tries  
   if(tries<3){
    printf("You have %d attempts left\n",3-tries);
   }
   if(tries==3){
    printf("System locked. Please wait for 5 seconds.");
     //Loop that refreshes the system after 5 seconds because of incorrect userpin  
    for(countdown=5;countdown>=1;countdown--){
        printf("\n%d..\n",countdown);
        Sleep(1000);}

   printf("You can try again now.");
   tries=0;
   }
 }
return 0;
}
