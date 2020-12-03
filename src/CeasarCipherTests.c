#pragma once
#include <stdio.h>
#include <stdlib.h>



void test();
void maintest();


//automative testing
void test() {
	printf("\nautomative test 1");
	printf("\n");
	
	int startingoffset = 4;
	char  startingArray[255] = { 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd','\0' };
	char *inputArrayToDecipher[255];
	char *inputArrayFromDecipher[255];


	printf("##########_BEGIN_TEST\n");
	printf("#starting array\n");
	printf(startingArray);
	printf("\n");

	printf("\n#encrypted array\n");
	*inputArrayToDecipher = returnNewEncryptedCharArray(startingArray, 4);
	printf(*inputArrayToDecipher);
	printf("\n");
	
	printf("\n#decrypted array\n");
	*inputArrayFromDecipher = returnDecryptedCharArray(*inputArrayToDecipher, 4);
	printf(*inputArrayFromDecipher);
	printf("\n");

	printf("################## Comparing\n");
	//assert that the two arrays are the same. the first is the original. the second is the decyphered.
	if (strcmp(startingArray, *inputArrayFromDecipher) == 0)
	{
		printf("equal - sucess\n");
	}
	else {
		printf("fail\n");
		printf(startingArray);
		printf("\n");
		printf(inputArrayFromDecipher);
		printf("\n");

	}
	printf("#########_END_TEST\n");

}

//user input testing
void test2() {

	char startingArray[255];
	char inputArrayToDecipher[255] = "";


	printf("ceasar c cipher example");
	printf("\n");
	printf("testing cipher- input your text now:\n");


	scanf_s("%s", &startingArray, 255);


	printf("if you want to decypher, input text now\n");
	scanf_s("%s", inputArrayToDecipher, 255);

}


void maintest() {

	test();
}



	//	char startingArray[255] = { 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd' };

	//processCipher(startingArray);


	//please select to decrypt or encrypt 

	//char decryptStringArray[255] = { 'l','i','p', 'p', 's',' ','a','s','v','p','h' };
	//processDecipher(inputArrayToDecipher);
	//decyphering

//	char startingArray[255];

//	char startingArray[255];

//	scanf_s("%s", inputArrayToDecipher, 255);

//printf("testing cipher- input your text now:\n");

	//scanf_s("%s", &startingArray,255);