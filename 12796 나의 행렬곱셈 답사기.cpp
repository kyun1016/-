#include<iostream>

using namespace std;

void matrix(int K) {
	//print matrix size is 3
	cout << 3 << endl;
	//print (1*1) (1*1) (1*k+1)
	cout << "1 1 1 " << K + 1;
}

int main() {
	int K;
	cin >> K;

	//save

	matrix(K);


	//또 아무 변화나 줘본겨


	return 0;
}