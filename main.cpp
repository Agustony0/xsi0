#include <iostream>
using namespace std;
char a[9]{'0','0','0','0','0','0','0','0','0'};
int n;

bool x = false;
bool o = false;

unsigned int c ;

void tabla() {
	cout << a[0] << " " << a[1] << " " << a[2]<<endl;
	cout << a[3] << " " << a[4] << " " << a[5]<<endl;
	cout << a[6] << " " << a[7] << " " << a[8]<<endl;
}
void win(){
	//poate sa fie mai optimizat
	//x
	//linii
	if (a[0] == 'x' && a[1] == 'x' && a[2] == 'x') 
		 x = true;
	
	if (a[3] == 'x' && a[4] == 'x' && a[5] == 'x')
		x = true;

	if (a[6] == 'x' && a[7] == 'x' && a[8] == 'x')
		x = true;
	//coloane
	if (a[0] == 'x' && a[3] == 'x' && a[6] == 'x')
		x = true;

	if (a[1] == 'x' && a[4] == 'x' && a[7] == 'x')
		x = true;

	if (a[2] == 'x' && a[5] == 'x' && a[8] == 'x')
		x = true;
	//diagonale
	if (a[0] == 'x' && a[4] == 'x' && a[8] == 'x')
		x = true;

	if (a[2] == 'x' && a[4] == 'x' && a[6] == 'x')
		x = true;
	//y
	//linii
	if (a[0] == 'o' && a[1] == 'o' && a[2] == 'o')
		o = true;

	if (a[3] == 'o' && a[4] == 'o' && a[5] == 'o')
		o = true;

	if (a[6] == 'o' && a[7] == 'o' && a[8] == 'o')
		o = true;
	//coloane
	if (a[0] == 'o' && a[3] == 'o' && a[6] == 'o')
		o = true;

	if (a[1] == 'o' && a[4] == 'o' && a[7] == 'o')
		o = true;

	if (a[2] == 'o' && a[5] == 'o' && a[8] == 'o')
		o = true;
	//diagonale
	if (a[0] == 'o' && a[4] == 'o' && a[8] == 'o')
		o = true;

	if (a[2] == 'o' && a[4] == 'o' && a[6] == 'o')
		o = true;
	
}

void solutie() {
	
	if (c == 0) {
		if (a[n] == 'x' || a[n] == 'o') 
			cout << "Pozitia " << n << " este luata." << endl;
			
		else {
			a[n] = 'x';
			c++;
		}
	}
	else {
		if(a[n] == 'x' || a[n] == 'o')
			cout << "Pozitia " << n << " este luata." << endl;
		else {
			a[n] = 'o';
			c--;
		}
	}
}

int main()
{

		for (int i = 0; i <= 8; i++) {
			tabla();
			//care jucator
			if (c == 0)
				cout << "x: ";
			else
				cout << "y: ";
			cin >> n;

			solutie();
			system("cls");
			//verificare
			win();
			if (x == true) {
				tabla();
				cout << "X a castigat" << endl;
				break;
			}
			else if (o == true) {
				tabla();
				cout << "0 a castigat" << endl;
				break;
			}
		}
		tabla();
		if (x == false && o == false) {
			cout << "Remiza" << endl;
		}
		
	return 0;
}

