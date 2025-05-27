#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
double llogaritja(double num1, char op, double num2) {
	switch (op) {
	case '+':
		return num1 + num2;
	case '-':
		return num1 - num2;
	case '*':
		return num1 * num2;
	case '/':
		if (num2 == 0) {
			cout << "Nuk mund te pjesetohet me 0\n";
			return NAN;
		}
		else {
			return num1 / num2;
		}
	case '^':
		return pow(num1, num2);
	}
}
int main() {
	double num1{};
	double num2{};
	char op{};
	string zgjedhja;
	double rezultati;
	do {
			cout << "Vendosni nje veprim matematikor(p.sh 2 + 2): ";
			while(true) {
				if (!(cin >> num1 >> op >> num2) ||
				(op != '+' && op != '-' && op != '*' && op != '/' && op != '^')) {
					cin.clear(); 
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Veprim i pavlefshem \n" << "Provoni perseri: ";
			}
			else {
				break;
			}
		}
		rezultati = llogaritja(num1, op, num2);
		if (rezultati == NAN) {
			
		}
		else {
			cout << num1 << " "  << op  << " " << num2 << " = " << rezultati << '\n';
		}
		cout << "Doni te kryeni nje veprim tjeter? ";
		cin >> zgjedhja;
		transform(zgjedhja.begin(), zgjedhja.end(), zgjedhja.begin(), ::tolower);

	} while (zgjedhja == "po");
	cout << "Ok mirupafshim" << '\n';
	return 0;
}