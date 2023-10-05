# Aum Sri Sai Ram

UMAT 506 CIE-3 (20M)

## Please follow the instructions given below:

1. Write your name and regdn no in each files submitted by you.
2. Write comments wherever required.
3. Submit in UMAT506/CIE3 folder on darshangera_share. 
4. Use Vi editor only to type programs.
5.  Proper identation should be used.
6. You are permitted to use string.h and stdio.h only.

## The following files need to be created:

1. **Create 3 files `user_string.h`, `user_string.c` and `user_main.c`**

2. **File `user_string.h` should be like:**

```c
#include<stdio.h>
#include<string.h>
void count_chars(char s[]); // function prototype which takes input a string and prints the count of each character in the string
void sort_chars(char s[]); // function prototype which takes input a string and sorts the characters in the string.
```

3. **File `user_string.c` should be like:**
```c
    
    void count_chars(char s[]) {
    // function definition which takes input a string and prints the count of each character in the string
    ...
    }

    void sort_chars(char s[]) {
    // function definition which takes input a string and sorts the characters in the string.
    ...
    }
```


4. **File `user_main.c` should be like:**
```c
    #include"user_string.c"
    void main()
    {
     char s1[100]; 
     char s2[100];

     puts("\n-----------START----------");
     //Read Ist string from user and invoke count_chars
     ...
     count_chars(s1);  
     //Read 2nd string from user and print sorted string
     ...
     ...
     ...
     
     puts("\n-----------END----------");
    }
```

## Questions

Q1. Write a program to count the number of each characters in given string. (10M)
Q2. Write a program to sort the given string. (10M)
