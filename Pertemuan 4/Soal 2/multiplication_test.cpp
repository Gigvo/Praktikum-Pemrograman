#include <iostream>
#include <fstream>

using namespace std;

int main() {
	int a, answer;
    ifstream infile;
    infile.open("testcase.txt");
    if(infile.is_open()){
        while(infile >> a){
            cout << "Input: " << a << endl;
        for (int i = 1; i<=10; i++){
		answer = a*i;
		cout << "Output: "<< a << " * "<< i << " = "<<answer << endl;
	}
    cout << endl;
        }
    }
	
}