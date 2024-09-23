#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main(){
	int a, answer = 0;
	ifstream infile;
	
	infile.open("testcase.txt");
	
	if(infile.is_open()){
		while(infile >> a){
			cout << "Input: "<< a << endl;
		for (int i = 1; i <= a; i++){
		answer += i;
	}
	cout << "Output: Sum = "<< answer<< endl;
	cout << "(Explanation: ";
	for (int i = 1; i <= a; i++){
		if (i != a){
			cout << i << " + ";
		}
		else if (i == a){
			cout << i <<" = " << answer << ")" << endl;
		}
	}
	answer = 0;
	}
	}
}