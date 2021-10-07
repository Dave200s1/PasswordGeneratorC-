// PasswordGenerator.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

static const char alphnum[] = "123456789" "!@#$%&*" "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz";
int stringlaenge = sizeof(alphnum)-1;

char GenRand() {
	return alphnum[rand()%stringlaenge];
}
	
int main() {
	int n, c = 0, s = 0;
	srand(time(0));
	cout << "Laenge des Passworts eingeben: ?" << endl;
	cin >> n;
	cout << n << endl;
	cout << "Deine Passwort lautet:";
N:
	char C;
	string D;
	for (int z = 0; z < n; z++)
	{
		C = GenRand();
		D += C;
		if (isdigit(C)) {
			c++;
		}
		if (C == '!' || C == '@' || C == ' % ' || C == ' & ' || C == ' * ' || C == '#') {
			s++;
		}
	}
	if (n > 2 && (s == 0 || c == 0))
	{
		goto N;
	}
	cout << D;


  return 0;
}




