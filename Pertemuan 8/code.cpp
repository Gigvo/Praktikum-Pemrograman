#include <iostream>
using namespace std;

int fibonacci(int n){
	if (n == 0){
		return 1;
	}
	else if (n == 1){
		return 1;
	}
	else {
		return fibonacci(n-1) + fibonacci(n-2);
	}
}

int main() {
	int n;
	cout << "Input Fibonacci ke berapa?: ";
	cin >> n;
	cout << "Fibonacci ke " << n << " adalah "<< fibonacci(n-1);
}


