#ifndef STD

  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  
  
#endif // !STD
 
#ifndef STU_DETAILS

#define MAX_NAME_SIZE 40
#define FILENAME "sdetails"

typedef struct  studentRecord{
	char  name[MAX_NAME_SIZE];
	float age;
	int regdNo;
	float gpa;
} Student;
/*
 * Appends student record at the end of file
 */
	int insertRecord(FILE* fp);		

/* 
 * Display all students records in stored in file
 */
	void displayRecords(FILE* fp);		

/* 
 * Modify gpa of student record with RegdNo						  
*/
	void modifyRecord(FILE** fpp, int RegdNo, float newGPA, char* message);

/* 
 * Delete a record from the file with the matching RegdNo
*/
	void deleteRecord(FILE **fpp, int RegdNo, char* message);

#endif // !STU_DETAILS
