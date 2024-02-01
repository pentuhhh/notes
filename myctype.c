#include <stdio.h>
/* isnum, isalpha, islower, isspace siupper tolower toupper
strcat strcmp str cpy strlen printstring */

int numberBa(char a);
int letterBa(char a);
int gamayBa(char a);
int dakoBa(char a);
int hawanBa(char a);
int epadako(char a);
int epagamay(char a);

int main(){
	int i;
	for(i = 0; i <= 122; i++){
		
		printf("Character: %c, number ba: %d, letter ba: %d, gamay ba: %d, dako ba: %d, hawan ba: %d, pa dako: %c, pa gamay: %c\n\n", i, numberBa(i), letterBa(i), gamayBa(i), dakoBa(i), hawanBa(i), epadako(i), epagamay(i));
		
	}
}

int numberBa(char a){
	if(a >= 48 && a <= 57){
		return 1;
	} else {
		return 0;
	}
}

int letterBa(char a){
	if((a >= 65 && a <= 90) || (a >= 97 && a <= 122)){
		return 1;
	} else {
		return 0;
	}
}

int gamayBa(char a){
	if(a >= 97 && a <= 122){
		return 1;
	} else {
		return 0;
	}
}

int dakoBa(char a){
	if(a >= 65 && a <= 90){
		return 1;
	} else {
		return 0;
	}
}

int hawanBa(char a){
	if(a == 32){
		return 1;
	} else {
		return 0;
	}
}

int epadako(char a){
	if((a >= 97 && a <= 122)){
		a -= 32;
		return a;
	} else {
		return 0;
	}
}

int epagamay(char a){
	if((a >= 65 && a <= 90)){
		a += 32;
		return a;
	} else {
		return 0;
	}
}
