#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<string> result;
	for (int i = 1; i <= 100; i++){
		if (i % 15 == 0) {
			result.push_back("FizzBuzz");
			cout << result[i-1] << endl;
		} else if (i % 5 == 0) {
			result.push_back("Buzz");
			cout << result[i-1] << endl;
		} else if (i % 3 == 0) {
			result.push_back("Fizz");
			cout << result[i-1] << endl;
		} else {
			result.push_back(to_string(i));
			cout << result[i-1] << endl;
		}         
	}

    vector<int> a;
	int input;
	cout << "Type ']' at the end of the input and no need to use ',' " << endl;
	cout << "Input: [";
	while (cin >> input){ 
		a.push_back(input);
	}
	int b = a.size();
    cout << "Input: [";
	for(int i = 0; i < a.size(); i++){
		cout << a[i];
		if (a[i] != a[b - 1]){
			cout << ", ";
		}
	}
	cout << "]" << endl;
	vector<int> temp(b);
	for (int i = 0; i < b; i++){
		temp[i] = a[b - i - 1];
	}
	
	for (int i = 0; i < b; i++){
		a[i] = temp[i];
	}
	cout << "Output: [";
	for(int i = 0; i < a.size(); i++){
		cout << a[i];
		if (a[i] != a[b - 1]){
			cout << ", ";
		}
	}
	cout << "]" << endl;
	
	return 0;
}