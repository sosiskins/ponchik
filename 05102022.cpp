#include <iostream>
#include <ctime> 
using namespace std;
int main() {
	// 1
/*	const int n = 10;
	int mas[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 51 - 20;//%51 дает диапозон от 0 до 50;
		cout << mas[i] << ' ';
	}
	cout << endl;
	for (int i = n - 1; i >= 0; i -= 2) {
		cout << mas[i] << ' ';
	}
	//2
	const int size = 10;
	int mas[n];
	srand(time(nullptr));
	for (int i = 0; i < 5; i++) {
		m[i] = rand() % 21;
		cout << m[i] << ' ';

}
	//3
	const int size = 10;
	int arr[size];
	srand(time(nullptr));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 41 - 20;
		cout << arr[i] << ' ';
	}
	cout << endl;
	int k = 0;
	for (int i = 0; i < size; i++) {
		if(arr[i] < 0) {
	}
}
	cout << "k (<0) = " << k << endl;
	//4
	const int size = 5;
	int m[size];
	srand(time(nullptr));
	for (int i = 0; i < size; i++) {
		m[i] = rand() % 21 - 10;
		cout << m[i] << ' ';
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (m[i] % 2 == 0) {
			sum += i;
		}

	}
	cout << sum;*/
	//1
	const int s = 5;
	int m[s];
	srand(time(nullptr));
	for (int i = 0; i < s; i++) {
		m[i] = rand() % 21 - 10;
		cout << m[i] << ' ';
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < s; i++) {
		if (m[i] % 2 == 0) {
			sum += i;
		}

	}
	cout << sum;
	//2
	const int n = 8;
	int m[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		m[i] = rand() % 31 - 20;
		cout << m[i] << ' ';
	}
	cout << endl;
	int sum = 0;
	for (int i = n - 1; i >= 0; i++) {
		if (m[i] % 3 == 0) {
			cout << m[i] << ' ';
		}

	}
	cout << sum;