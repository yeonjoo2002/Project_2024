#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(void) {
	
    char inputChar;
    char outputChar;
    
    printf("enter a character: ");
    scanf(" %c", &inputChar); 

    int asciiValue = (int) inputChar;  
    int nextAsciiValue = asciiValue + 1;  
    
    outputChar = (char) nextAsciiValue;
    
    printf("The next character %c (%i) is %c (%i) \n", inputChar,asciiValue, outputChar, nextAsciiValue);

    return 0;
}
