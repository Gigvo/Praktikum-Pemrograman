#include <iostream>
using namespace std;

int main() {
	int a, answer;
	cout << "Input: ";
	cin >> a;
	for (int i = 1; i<=10; i++){
		answer = a*i;
		cout << "Output: "<< a << " * "<< i << " = "<<answer << endl;
	}
}