#include <stdafx.h>
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main() {

	vector<char> normalV(27);
	vector<char> cipherV(27);
	string toDec = "";
	string beenDec = "";

	int i = 0;

	normalV.at(0) = 'a'; cipherV.at(0) = '!'; ++i;
	normalV.at(1) = 'b'; cipherV.at(1) = '^'; ++i;
	normalV.at(2) = 'c'; cipherV.at(2) = '&'; ++i;
	normalV.at(3) = 'd'; cipherV.at(3) = '*'; ++i;
	normalV.at(4) = 'e'; cipherV.at(4) = '@'; ++i;
	normalV.at(5) = 'f'; cipherV.at(5) = '('; ++i;
	normalV.at(6) = 'g'; cipherV.at(6) = ')'; ++i;
	normalV.at(7) = 'h'; cipherV.at(7) = '-'; ++i;
	normalV.at(8) = 'i'; cipherV.at(8) = '#'; ++i;
	normalV.at(9) = 'j'; cipherV.at(9) = '_'; ++i;
	normalV.at(10) = 'k'; cipherV.at(10) = '='; ++i;
	normalV.at(11) = 'l'; cipherV.at(11) = '+'; ++i;
	normalV.at(12) = 'm'; cipherV.at(12) = '['; ++i;
	normalV.at(13) = 'n'; cipherV.at(13) = '{'; ++i;
	normalV.at(14) = 'o'; cipherV.at(14) = '$'; ++i;
	normalV.at(15) = 'p'; cipherV.at(15) = ']'; ++i;
	normalV.at(16) = 'q'; cipherV.at(16) = '}'; ++i;
	normalV.at(17) = 'r'; cipherV.at(17) = ';'; ++i;
	normalV.at(18) = 's'; cipherV.at(18) = ':'; ++i;
	normalV.at(19) = 't'; cipherV.at(19) = ','; ++i;
	normalV.at(20) = 'u'; cipherV.at(20) = '%'; ++i;
	normalV.at(21) = 'v'; cipherV.at(21) = '<'; ++i;
	normalV.at(22) = 'w'; cipherV.at(22) = '.'; ++i;
	normalV.at(23) = 'x'; cipherV.at(23) = '>'; ++i;
	normalV.at(24) = 'y'; cipherV.at(24) = '/'; ++i;
	normalV.at(25) = 'z'; cipherV.at(25) = '?'; ++i;
	normalV.at(26) = ' '; cipherV.at(26) = ' '; ++i;

	// Get secret message
	do {
		cout << "Enter a secret message: ";
		getline(cin, toDec);

	} while (toDec.length() == 0);

	beenDec = toDec;

	int messlength = toDec.length();

	// Decrypt secret message

	int a, code;

	for (a = 0; a < messlength; a++)

	{
		for (code = 0; code <= 26; code++)
		{

			if (toDec.at(a) == cipherV.at(code))

			break;

		}

		beenDec.at(a) = normalV.at(code);

	}

	cout << "Decrypted message: " << beenDec << endl;

	getchar();

	return 0;

}