/*
 * String library for C
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 25-9-M
 */

#include "mystring.h"

unsigned long int mystrlen(const char *str) { // if I don't put const here, it gives warning in strcmp
	int len = 0;
	while(*str++) len++;
	return len;

}

int mystrcmp(const char *str1, const char *str2) {
	while(*str1 != '\0')
		if (*str1++ > *str2++)
			return -1;
		else if(*str1 < *str2)
			return 1;
	
	if (*str2 != '\0') return 1; // str2 has bigger length
	else return 0;
}

const char* mystrstr(const char *str, const char *sub){
	int len = mystrlen(sub);
	int found = 0;
	while(*str){
		found = 1; // assume found and reject later
		for(int i = 0; i < len; i++){
			if(str[i] != sub[i]){	// don't change the pointer just traverse
				found = 0;	
				break;
			}
		}
		if(found) return str;
		str++;
	}
	return 0; // not found at all
}

void mystrcpy(char *dest, const char *source){
	while(*source){
		*dest = *source;
		dest++;
		source++;
	}
	*dest = '\0';
}

void mystrncpy(char *dest, const char *source, size_t size){
	size_t i = 0;
	while(*source && i < size){
		*dest = *source;
		dest++;
		source++;
		i++;
	}
	*dest = '\0';
}

void mystrcat(char *dest, const char *source){
	dest += mystrlen(dest);
	while(*source){
		*dest = *source;
		dest++;
		source++;
	}
	*dest = '\0';
}

void mystrncat(char *dest, const char *source, size_t size){
	size_t i = 0;
	dest += mystrlen(dest);
	while(*source && i < size){
		*dest = *source;
		dest++;
		source++;
		i++;
	}
	*dest = '\0';
}

char ctoLower(char s){
	if(65 <= s && s <= 90){
		return (s + 32);
	}

	return s;
}

void altchar(char *str){
	while(*str){
		printf("%c",*str);	
		str+=2;
	}
}

char* getsubstr(char *str, int start_pos, int no_of_chars){
	char sub[no_of_chars];
	char *sp = sub;			// pointer to the beginning
	str+= start_pos;
	int i = 0;
	while(i < no_of_chars && *str){
		*sp = *str;
		str++;
		sp++;
		i++;
	}
	*sp = '\0';
	sp -= no_of_chars; //pointer to the beginning of array
	return sp;
}


/**
 * puts the reversed str into rev
 *
 * @param str - the string to be reversed
 * @param rev - the string that will contain the reversed string
 * @returns void
 *
 */

// NOTE: Dangling pointer: If a pointer is referring to an object that is destroyed, the pointer is said to be a dangling pointer until it is given a new value.

void reverse(char *str, char*rev){		
	size_t size = mystrlen(str);
	int i = 0;
	for(; i < size; i++){
		rev[i] = str[size -1 - i];
	}
	rev[i] = '\0';
}

void revaltchar(char *str){
	char rev[mystrlen(str)];
	reverse(str,rev);
	altchar(rev);
}

char* largestString(char *str1, char *str2){
	return(mystrlen(str1) > mystrlen(str2) ? str1 : str2);
}


// Function to Accept a string and a character and find out whether this char is present in the string
int isPresent(char *str, char c){
	for(int i = 0; i < mystrlen(str); i++){
		if (str[i] == c)
			return 1;	// true
	}
	return 0;	// false
}

// Function to Accept a String and print Vowels
void printVowels(char *str){
	char *vowels = "aeiou";
	printf("Vowels in \"%s\": ", str);
	for(int i = 0; i < mystrlen(str); i++){
		if(isPresent(vowels,str[i]))
			printf("%c ",str[i]);
	}
	printf("\n");
}

// Function to Accept a String and return no. of each Vowel
int countVowels(char *str){
	int count = 0;
	char *vowels = "aeiou";
	for(int i = 0; i < mystrlen(str); i++)
		if(isPresent(vowels,str[i])) count++;
	
	return count;
}

//Function to Accept a String and prints no of each Vowel
void tableVowels(char *str){

	int count;
	char *vowels = "aeiou";

	for(int i = 0; i < 5; i++){		// iterate through vowels
		count = 0;
		for(int j = 0; j < mystrlen(str); j++){	// iterate through str
			if(vowels[i] == ctoLower(str[j])) count++;
		}
		if(count) printf("%c: %d\n", vowels[i], count);
	}
}

char *find(char *str, const char *tofind){
	int found = 0;
	size_t len = mystrlen(tofind);
	while(*str){								// be careful when using *str++
		found = 1;
		for(int i = 0; i < len; i++){
			if(!(str[i] == tofind[i])){
				found = 0;
				break;
			}
		}
		if (found) return str;
		str++;
	}
	return str;	// pointer to null string
}

void findAndReplace(char *str, const char *tofind, const char *replace){
    char *p = find(str,tofind);
    if(!(*find(str, tofind))){
      printf("not found!");
      return;
    }
    char temp;
    while(*replace){
      *p = *replace;
      p++;
      replace++;
  } 
}

void changeString(char *str){
	str[2] = 'b';
}

int main(){
    
}
