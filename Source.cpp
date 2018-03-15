#include<fstream>
#include<iostream>
using namespace std;

int main() {
	char keepAlive = 'y';
	char i;
	int anyCharacter;
	int aCount = 0;
	int fCount = 0;
	int aCount2 = 0;
	int bCount = 0;

	ifstream in_a;
	in_a.open("info.dat");
	if (in_a.fail()) {
		cout << "Unable to read file, the program will now close." << endl;
		cin >> keepAlive; //keep the program from closing the window until the user inputs something
		exit(1);
	}


	while (in_a >> i) {
		anyCharacter++;
	}
	in_a.close();
	cout << "There are " << anyCharacter << " characters." << endl;


	in_a.open("info.dat");
	for (int x = 0; x<anyCharacter; x++) {
			in_a >> i;
			if (i == 'A') {
				aCount++;
			}
			else if (i == 'F') {
				fCount++;
			}
			else if (i == 'a') {
				aCount2++;
			}
			else if (i == 'b') {
				bCount++;
			}
	}
	cout << "There are " << aCount << " A's." << endl;
	cout << "There are " << fCount << " F's." << endl;
	cout << "There are " << aCount2 << " a's." << endl;
	cout << "There are " << bCount << " b's." << endl;

	in_a.close();

	cout << "Enter a character to end the program. ";
	cin >> keepAlive; //keep the program from closing the window until the user inputs something
	return 0;
}
