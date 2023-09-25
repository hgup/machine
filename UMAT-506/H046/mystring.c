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

void altchar(char *str){
	while(*str){
		printf("%c",*str);	
		str+=2;
	}
}

char* getsubstr(char *str, int start_pos, int no_of_chars){
	char sub[no_of_chars];
	char *sp = sub;
	str+= start_pos;
	while(*str){
		*sp = *str;
		str++;
		sp++;
	}
	*sp = '\0';
	sp -= no_of_chars;
	return sp;
	// TODO check
}

int main(){
	printf("%s", getsubstr("aaaThisaaa",3,4));
}
