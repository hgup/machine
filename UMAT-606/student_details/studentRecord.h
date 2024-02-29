#ifndef STD

  #include <stdio.h>
  #include <stdlib.h>
  
#endif // !STD
 
#ifndef STU_DETAILS

struct  studentRecord{
	char  name[50];
	float age;
	int regdNo;
	float gpa;
};
/*
 * Appends student record at the end of file
 */
	void insertRecord(FILE* fp);		

/* 
 * Display all students records in stored in file
 */
	void displayRecords(FILE* fp);		

/* 
 * Modify gpa of student record with RegdNo						  
*/
	void modifyRecord(FILE* fp, int RegdNo, float newGPA);

/* 
 * Delete a record from the file with the matching RegdNo
*/
	void deleteRecord(FILE *fp, float RegdNo);
                        	

#endif // !STU_DETAILS
