
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "alphabetcasesconsts.h"
//check on scanf_s
//check on using pointers to print


char* encryptCipher(char[], int);
char* decryptCipher(char[], int);

//const int CAPTIAL_A = 65;
//const int CAPITAL_Z = 90;
//
//const int LOWERCASE_A = 97;
//const int LOWERCASE_Z = 122;



char* decryptCipher(char toDeCipher[], int offset) {
	//char newDeEncrytpedString[255] = { '\0' };
	
	if (offset >= 1 && offset <= 26) {
		int i;
		for (i = 0; i < toDeCipher[i]!='\0'; i++)
		{
			char letter = toDeCipher[i];

			if (isupper(letter))
			{
				letter -= offset;
				if (letter < CAPTIAL_A)
				{
					letter += 26;
				}
			}
			else if (islower(letter))
			{
				letter -= offset;
				if (letter < LOWERCASE_A)
				{
					letter += 26;
				}
			}
			//newEncrytpedString.append(1, (char)letter);
			toDeCipher[i] = (char)letter;
		}
	}
	else {
		printf( "error: the offset is out of bound" );
	}

	printf("your decrypted string is as follow: \n");
	printf(toDeCipher);
	printf("\n");
	return toDeCipher;
}
char* encryptCipher(char toEnCipher[], int offset) {
	//char newEncrytpedString[255];

	if (offset >= 1 && offset <= 26) {
	int i;

		for (i = 0; i < toEnCipher[i] != '\0'; i++)
		{
			char letter = toEnCipher[i];

			if (isupper(letter))
			{
				letter += offset;
				if (letter > CAPITAL_Z)
				{
					letter -= 26;
				}
			}
			else if (islower(letter))
			{
				letter += offset;
				if (letter > LOWERCASE_Z)
				{
					letter -= 26;
				}
			}


			//newEncrytpedString.append(1, (char)letter);
			toEnCipher[i] = (char)letter;

		}
	}
	else {
		printf("error: the offset is out of bound" );
	}
	printf("your encrypted string is as follow: \n");
	//potential return new encryption string
	printf(toEnCipher);
	printf("\n");
	return toEnCipher;
}