#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");

	//1  вывести элементы с нечётными индексами
	//в обратном порядке
	//const int n = 10;
	//int mas[n];
	//srand(time(nullptr));
	//for (int i = 0; i < n; i++) {
	//	mas[i] = rand()%51-20;// %51 даёт диапазон от 0 до 50
	//	//rand() выдаёт случайное число от -32786 до 32786
	//	cout << mas[i] << ' ';
	//}
	//cout << endl;
	//for (int i = n - 1; i >= 0; i -= 2) {
	//	cout << mas[i] << ' ';
	//}

	//2
	//заполнить массив случайными числами от -20 до 20
	//найти кол-во отрицательных чисел
	/*const int size = 10;
	int arr[size];
	srand(time(nullptr));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 41 - 20;
		cout << arr[i] << ' ';
	}
	cout << endl;
	int k = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0) {
			k++;
		}
	}
	cout << k << endl;*/

	//3
	/*const int size = 10;
	int arr[size];
	srand(time(nullptr));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 21 - 10;
		cout << arr[i] << ' ';
	}
	cout << endl;
	int k = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] > 0) {
			k = k + arr[i];
		}
	}
	cout << k << endl;*/



	//абрамян

	//array1
	/*const int n = 10;
	int mass[n];
	int s = 1;
	for (int i = 1; i < n + 1; i++) {
		mass[i] = s;
			s += 2;
	}
	for (int i = 1; i < n + 1; i++) {
		cout << mass[i] << endl;
	}*/

	//array2
	/*const int n = 10;
	int mass[n];
	int s = 2;
	for (int i = 1; i < n + 1; i++) {
		mass[i] = s;
			s = s * 2;
	} 
	for (int i = 1; i < n + 1; i++) {
		cout << mass[i] << ' ';
	}*/

	//array3
	/*const int n = 10;
	int mass[n];
	int a, d;
	cin >> a >> d;
	int k = 0;
	for (int i = 1; i < n + 1; i++) {
		mass[i] = a + k;
		k = k + d;
	}
	for (int i = 1; i < n + 1; i++) {
		cout << mass[i] << ' ';
	}*/
	//array4
	/*const int n = 10;
	int mass[n];
	int a, d;
	cin >> a >> d;
	int k = 1;
	for (int i = 1; i < n + 1; i++) {
		mass[i] = a + k;
		k = k * d;
	}
	for (int i = 1; i < n + 1; i++) {
		cout << mass[i] << ' ';

	}*/

//cam2
//const int size = 10;
//int arr[size];
//srand(time(nullptr));
//for (int i = 0; i < size; i++) {
//	arr[i] = rand() % 31 - 10;
//	cout << arr[i] << ' ';
//}
//cout << endl;
//for (int i = 0; i < size; i++) {
//	if ((arr[i]%3) == 0) {
//		cout << arr[i] << ' ';
//	}
//}

	//cam3
//const int size = 10;
//int arr[size];
//srand(time(nullptr));
//for (int i = 0; i < size; i++) {
//	arr[i] = rand() % 51 - 30;
//	cout << arr[i] << ' ';
//}
// long long int k = 1;
//cout << endl;
//for (int i = 0; i < size; i++) {
//	if ((arr[i]%7) != 0) {
//		k = k * arr[i];
//		cout << arr[i] << ' ';
//	}
//}
//
//cout << endl << k;
	

//cam4
//const int size = 10;
//int arr[size];
//srand(time(nullptr));
//for (int i = 0; i < size; i++) {
//	arr[i] = rand() % 61 - 10;
//	cout << arr[i] << ' ';
//}
//cout << endl;
//int k = 0, s = 0;
//for (int i = 0; i < size; i++) {
//	if (arr[i] > 0) {
//		k = k + arr[i];
//		s++;
//	}
//}
//double mid = (double)k / (double)s;
//cout << endl << mid;

//cam5
//const int size = 10;
//int arr[size];
//srand(time(nullptr));
//for (int i = 0; i < size; i++) {
//	arr[i] = rand() % 6 + 1;
//	cout << arr[i] << ' ';
//}
//cout << endl;
//int k = 1;
//for (int i = 0; i < size; i++) {
//	if (((arr[i]%3) == 0) && (arr[i] % 5) != 0) {
//		k = k * arr[i];
//		cout << arr[i] << ' ';
//	}
//}
//double g = sqrt(k);
//cout << endl << g;

}