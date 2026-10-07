#include <stdio.h>
#include <string.h>
# include <windows.h>

int main() {
    char correctPin[] = "1234";
    char userPin[20];
    int choice;
    int countdown;
 for(int tries=1;tries<=3;tries++){
        printf("Enter user pin: ");
        scanf("%19s", userPin);
    if (strcmp(correctPin, userPin) == 0){
            printf("\n=== Device Menu ===\n");
            printf("1.Open Door.\n");
            printf("2.Change username.\n");
            printf("3.Change pin.\n");
            printf("4.Exit.\n");

        printf("Select choice:");
        scanf("%d",&choice);
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
   else if(strlen(userPin)!=4)
        printf("Pin length must be 4 digits");
   else{
        printf("Access denied.");
    }
   if(tries<3){
    printf("You have %d attempts left\n",3-tries);
   }
   if(tries==3){
    printf("System locked. Please wait for 5 seconds.");
    for(countdown=5;countdown>=1;countdown--){
        printf("\n%d..\n",countdown);
        Sleep(1000);}

   printf("You can try again now.");
   tries=0;
   }
 }
return 0;
}
