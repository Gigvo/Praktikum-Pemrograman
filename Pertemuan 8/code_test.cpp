#include <iostream>
#include <fstream>
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
	ifstream infile;
    infile.open("test.txt");
    int n, expected_output;
    if (infile.is_open()){
        while(infile >> n >> expected_output){
            cout << "Expected Output: " << expected_output << endl;
            cout << "Fibonacci ke " << n << " adalah "<< fibonacci(n-1) << endl;
            if (fibonacci(n-1) == expected_output) {
                cout << "TESTCASE BENAR" << endl << endl;
            }
        }
    }
	
}


