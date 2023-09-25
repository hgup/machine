/*
 * String library in C
 * AUTHOR: Hursh Gupta
 * WRITTEN ON: 25-9-M
 */

#include "mystring.h"
#include <stdio.h>
#include <string.h>

int mystrlen(const char *str) { // if I don't put const here, it gives warning in strcmp
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

int main(){
}
