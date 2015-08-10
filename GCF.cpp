#include <iostream>

int main() {
	using std::cin;
	using std::cout;
	using std::endl;

	int num1 = 0;
	int num2 = 0;
	int gcf  = 0;
	int test = 1;

	cout << "Greatest Common Factor Calculator" << endl << endl;
	cout << "First number: ";	cin >> num1;
	cout << "Second number: ";	cin >> num2;

	if(num1 == num2) {
		gcf = num1;
	}
	else {
		while(test <= num1 && test <= num2) {
			if(num1 % test == 0 && num2 % test == 0) {
				gcf = test;
			}
			++test;
		}
	}

	cout << "The GCF is " << gcf << "." << endl;

	return 0;
}
