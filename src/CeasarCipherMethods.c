#pragma once
#include "alphabetcasesconsts.h"

void decryptCipherMethod(char[], int);
void encryptCipherMethod(char[], int);

void decryptCipherMethod(char toCipher[], int offset) {
	char newEncrytpedString[255] = "";
	int i;
	if (offset >= 1 && offset <= 26) {

		for (i = 0; i < toCipher[i] != '\0'; i++)
		{
			char letter = toCipher[i];

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
			newEncrytpedString[i] = (char)letter;
		}
	}
	else {
		printf("error: the offset is out of bound");
	}

	printf("your decrypted string is as follow: \n");
	printf("%s", newEncrytpedString);
	printf("\n");
}
void encryptCipherMethod(char toCipher[], int offset) {
	char newEncrytpedString[255];
	int i;

	if (offset >= 1 && offset <= 26) {

		for (i = 0; i < toCipher[i] != '\0'; i++)
		{
			char letter = toCipher[i];

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
			newEncrytpedString[i] = (char)letter;

		}
	}
	else {
		printf("the offset is out of bound");
	}
	printf("your encrypted string is as follow: \n");
	//potentiall return new encryption string
	printf("%s", newEncrytpedString);
}
