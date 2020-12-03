
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



char* decryptCipher(char toCipher[], int offset) {
	char newEncrytpedString[255]="";
	int i;
	if (offset >= 1 && offset <= 26) {

		for (i = 0; i < toCipher[i]!='\0'; i++)
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
		printf( "error: the offset is out of bound" );
	}

	printf("your decrypted string is as follow: \n");
	printf("%s",newEncrytpedString );
	printf("\n");
}
char* encryptCipher(char toCipher[], int offset) {
	char newEncrytpedString[255] = "";
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
		printf("error: the offset is out of bound" );
	}
	//printf("your encrypted string is as follow: \n");
	//potentiall return new encryption string
	//printf("%s", newEncrytpedString );

	return newEncrytpedString;
}






void main(int argc, char** argv) {

	maintest();
	//test();
}













//void processDecipher(char decryptingString[]) {
//
//	int offset;
//	//char stringToDecrypt[255];
//
//	printf("lets decipher something\n");
//	printf("give the number of offset. (1-26)\n");
//	//fgets(offset, 255, stdin);
//		scanf_s("%d", &offset);
//	printf("\n what do you want to decrypt\n");
//
//	//scanf_s("%s", &stringToDecrypt);
//	//std::getline(std::cin, stringToDecrypt);
//	//std::getline(std::cin, stringToDecrypt);
//
//	decryptCipher(decryptingString, offset);
//
//	printf("\n");
//
//	printf(decryptingString);
//	printf("\n");
//}


//void processCipher(char encryptingString[]) {
//	int offset;
//	//char stringtoencrypt[255];
//
//	printf("begin encrypting process\n");
//	printf("give the number of offset for cypher. (1-26)\n");
//	scanf_s("%d", &offset);
//
//
//	printf("\nceasar-cypher is %d\n", offset);
//
//
//	//printf("\nwhat do you want to encrypt\n");
//	//scanf_s("%s", &encryptingString);
//	//scanf_s("%s", &stringtoencrypt);
//	//std::getline(std::cin, stringtoencrypt);
//	//std::getline(std::cin, stringtoencrypt);
//
//	encryptCipher(encryptingString, offset);
//
//
//	printf(encryptingString);
//	return encryptCipher;
//
//}