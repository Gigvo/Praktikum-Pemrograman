#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a, answer = 0;
	cout << "Input: ";
	cin >> a;
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
			cout << i <<" = " << answer << ")";
		}
	}
		
}
