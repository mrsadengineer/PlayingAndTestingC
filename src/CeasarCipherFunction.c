#pragma once
#include <stdbool.h>

char* returnNewEncryptedCharArray(char[], int);
char* returnDecryptedCharArray(char[], int);
//char* applyCeasarCipher(char[], int, bool);

char* returnNewEncryptedCharArray(char encryptingString[], int offset) {

	//char stringtoencrypt[255];
	printf("\nceasar-cypher protocol: Encrypt. \nCypher-Index is at %d\n", offset);



	//*stringtoencrypt=encryptCipher(encryptingString, offset);
	//printf("encrypted text:\n");
	//printf(encryptingString);
	//return stringtoencrypt;
	return encryptCipher(encryptingString, offset);

}

char* returnDecryptedCharArray(char decryptingString[], int offset) {
	printf("\nceasar-cypher protocol: Decrypt. \nCypher-Index is at %d\n", offset);
	//printf("\nceasar-cypher index is %d\n", offset);
	//char stringDecrypted[255];
	//*stringDecrypted = decryptCipher(decryptingString, offset);

	//printf("\n");
	//printf("decrypted text: \n");
	//printf(decryptingString);
	//printf("\n");
	return decryptCipher(decryptingString, offset);
}	







	//int offset;
	//char stringToDecrypt[255] = decryptingString;

	//printf("lets decipher something\n");
	//printf("give the number of offset. (1-26)\n");
	//fgets(offset, 255, stdin);
	//scanf_s("%d", &offset);
	//printf("\n what do you want to decrypt\n");

	//scanf_s("%s", &stringToDecrypt);
	//std::getline(std::cin, stringToDecrypt);
	//std::getline(std::cin, stringToDecrypt);
//########################################
	//int offset;
	//printf("begin encrypting process\n");
	//printf("give the number of offset for cypher. (1-26)\n");
	//scanf_s("%d", &offset);
	//printf("\nwhat do you want to encrypt\n");
	//scanf_s("%s", &encryptingString);
	//scanf_s("%s", &stringtoencrypt);