#pragma once
#include <stdio.h>
#include <stdlib.h>



void test();
void maintest();



void test() {

//	char arryforfor[255];
	char* inputArrayToDecipher[255];
	char* inputArrayFromDecipher[255];
char arryforfor[255] = { 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd' };
		//char decryptStringArray[255] = { 'l','i','p', 'p', 's',' ','a','s','v','p','h' };
	int startingoffset = 4;

	printf("\nautomative test 1");
	printf("\n");
	//printf("testing cipher- input your text now:\n");

	//scanf_s("%s", &arryforfor,255);

	*inputArrayToDecipher = returnNewEncryptedCharArray(arryforfor, 4);


	//please select to decrypt or encrypt 
	//printf("if you want to decypher, input text now\n");
//	scanf_s("%s", inputArrayToDecipher, 255);
	*inputArrayFromDecipher = returnDecryptedCharArray(inputArrayToDecipher, 4);
	//decyphering

	if (strcmp(arryforfor, inputArrayFromDecipher) == 0)
	{
		printf("equal - sucess");
	}
	else {
		printf("fail");
	}

}

void test2() {

	char arryforfor[255];
	char inputArrayToDecipher[255] = "";


	printf("ceasar c cipher example");
	printf("\n");
	printf("testing cipher- input your text now:\n");
	//	char arryforfor[255] = { 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd' };

	scanf_s("%s", &arryforfor, 255);

	//processCipher(arryforfor);


	//please select to decrypt or encrypt 
	printf("if you want to decypher, input text now\n");
	scanf_s("%s", inputArrayToDecipher, 255);
	//char decryptStringArray[255] = { 'l','i','p', 'p', 's',' ','a','s','v','p','h' };
	//processDecipher(inputArrayToDecipher);
	//decyphering
}


void maintest() {
	//printf("testing test one here::::::::");
	test();
}