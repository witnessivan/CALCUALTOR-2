#include "CALCULATOR.h" 

int main() {
	double a, b, c;
	cout << "Enter variables " << endl;
	cin >> a >> b;
	cout << "Choose operation: +, -, *, / " << endl;
	char op = ' ';
	cin >> op;
	switch (op) {
	case '+': {
		c = add(a, b);
	}
			  break;
	case '-': {
		c = substract(a, b);
	}
			  break;
	case '*': {
		c = multiply(a, b);
	}
			  break;
	case '/': {
		if (b == 0) {
			cout << "b = 0, program can't do devide!" << endl;
			system("pause");
			return 0;
		}
		else
			c = devide(a, b);
	}
			  break;
	default: {
		cout << "Wrong operation";
	}
			 break;
	}
	printresult(c);
	system("pause");
}