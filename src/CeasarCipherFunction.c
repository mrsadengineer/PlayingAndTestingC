#pragma once
char* returnNewEncryptedCharArray(char[], int);
char* returnDecryptedCharArray(char[], int);

char* returnNewEncryptedCharArray(char encryptingString[], int offset) {
	//int offset;
	char stringtoencrypt[255];

	//printf("begin encrypting process\n");
	//printf("give the number of offset for cypher. (1-26)\n");
	//scanf_s("%d", &offset);


	printf("\nceasar-cypher index is %d\n", offset);


	//printf("\nwhat do you want to encrypt\n");
	//scanf_s("%s", &encryptingString);
	//scanf_s("%s", &stringtoencrypt);
	//std::getline(std::cin, stringtoencrypt);
	//std::getline(std::cin, stringtoencrypt);

	*stringtoencrypt=encryptCipher(encryptingString, offset);
	printf("encrypted text:\n");
	printf(encryptingString);
	return stringtoencrypt;

}

char* returnDecryptedCharArray(char decryptingString[], int offset) {

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


	printf("\nceasar-cypher index is %d\n", offset);
	char stringDecrypted[255] = "";
	*stringDecrypted = decryptCipher(decryptingString, offset);

	printf("\n");
	printf("decrypted text: \n");
	printf(decryptingString);
	printf("\n");
	return stringDecrypted;
}