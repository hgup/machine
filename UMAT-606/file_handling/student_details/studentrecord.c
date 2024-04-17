
#include "studentRecord.h"
#include <errno.h>

int main(){
  
  FILE* fp = fopen(FILENAME, "a+b");
  char ch;
  int regdNo, gpa;
  char message[100] = "Hello!";
  int running = 1; // is the program running?
  

  if(!fp){
    printf("Data file doesn't exist");
    return -1;
  }
  while(running){
    system("clear");
    ch = 0;
    printf("\n WELCOME TO SASTA \"STUDENT MANAGEMENT SYSTEM\" (SSMS):\n");
    printf("\n\nSYSTEM:[%s]",message);
    printf("\n\nChoose your option:\n\n[1]\tInsert\n[2]\tDelete\n[3]\tUpdate\n[4]\tDisplay\n[q]\tQuit\n");
    printf("\nChoose Option: ");
    scanf(" %c",&ch);
    switch (ch) {

      case 0:
        printf("\nno option selected :(");
        break;
        

      case 'q':
        running = 0;
        break;

      // Insert
      case '1': 
        if(insertRecord(fp)) strcpy(message, "Successfully added new student");
        break; 

      // Delete
      case '2':
        printf("Enter RegdNo for student to be deleted (0 to cancel): ");
        scanf("%d",&regdNo);
        if (regdNo) deleteRecord(&fp,regdNo, message);
        else strcpy(message, "OPERATION CANCELLED");
        break; 

      // Update
      case '3':
        printf("Enter RegdNo for student to be updated (0 to cancel): ");
        scanf("%d",&regdNo);
        if (regdNo){
          printf("Enter GPA(UPDATED): ");
          scanf("%d",&gpa);
          modifyRecord(&fp,regdNo,gpa, message);
        } else sprintf(message,"OPERATION CANCELLED");
        break; 

      // Display
      case '4':
        system("clear");
        displayRecords(fp);
        break; 

      // Invalid entry
      default:
        sprintf(message, "Invalid Entry! Please enter options [1-4]");
        break; 
    }
    if (ch == '4'){
      printf("\nPress any key to continue;");
      getchar();
      getchar();
    }
  }






  printf("Thank you for using SSMS!\n");
  fclose(fp);
  return 0;
}

