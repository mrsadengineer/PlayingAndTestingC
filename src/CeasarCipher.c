//#include <iostream>
//#include <string>
#include <stdio.h>
#include <stdlib.h>

//check on scanf_s
//check on using pointers to print



const int CAPTIAL_A = 65;
const int CAPITAL_Z = 90;

const int LOWERCASE_A = 97;
const int LOWERCASE_Z = 122;


void decryptCipher(char toCipher[], int offset) {
	char newEncrytpedString[255];

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
			newEncrytpedString[i], (char)letter;
		}
	}
	else {
		printf( "the offset is out of bound" );
	}

	printf("your encrypted string is as follow: \n");
	printf("%s",newEncrytpedString );


}



void encryptCipher(char toCipher[], int offset) {
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
		printf("the offset is out of bound" );
	}


	printf("your encrypted string is as follow: \n");

	//potentiall return new encryption string
	printf("%s", newEncrytpedString );


}


void processCipher() {
	int offset;
	char stringtoencrypt[255];

	printf("lets cipher something\n");
	printf("give the number of offset. (1-26)\n");

	scanf_s("%d", &offset);
	

	printf("\n off is %d\n", offset);
	printf("\n what do you want to encrypt\n");

	scanf_s("%s", &stringtoencrypt);
	//std::getline(std::cin, stringtoencrypt);
	//std::getline(std::cin, stringtoencrypt);

	encryptCipher(stringtoencrypt, offset);


	printf( stringtoencrypt );

}
void processDecipher() {

	int offset;
	char stringToDecrypt[255];

	printf("lets decipher something\n");
	printf("give the number of offset. (1-26)\n");
	//fgets(offset, 255, stdin);
		scanf_s("%d", &offset);
	printf("\n what do you want to decrypt\n");

	scanf_s("%s", &stringToDecrypt);
	//std::getline(std::cin, stringToDecrypt);
	//std::getline(std::cin, stringToDecrypt);

	decryptCipher(stringToDecrypt, offset);


	printf(stringToDecrypt);

}

void main(int argc, char** argv) {

	printf("hello ceasar");
	//please select to decrypt or encrypt 
}