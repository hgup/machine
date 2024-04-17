#ifndef STD
  #include <stdio.h>
  #include <stdlib.h>
#endif // !STD
#ifndef FILE_HANDLING

/*
 * Compares the content of two files and prints the first different line
 *
 * @param file1: filename1
 *
 * @param file2: filename2
 */
  void compareFiles(char* file1, char* file2);
   
/*
 * Reads a line starting from the given `pos` in a file opened
 * in "r(+)" mode and puts it into string `s`
 *
 * @param s: string pointer where the data will be loaded
 * @param f: FILE poitner opened in `r` mode
 * @param pos: position from the beginning (SEEK_SET)
 *
 */
  void readline(char* s, FILE* f, int pos);

#endif // !FILE_HANDLING
