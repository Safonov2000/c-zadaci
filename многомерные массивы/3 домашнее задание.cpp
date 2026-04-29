

//Заполнить матрицу 10 на 10 и транспортировать ее
#include<iostream>
#include<cmath>
#include<cstdlib>

using namespace std;

int main() {

	system("chcp 1251");

	cout << "Матрица 10 на 10";

	int a[10][10];

	int i;

	int j;


	int temp;

	int n = 10;



	for (i = 0; i < 10; i++) {

		for (j = 0; j < 10; j++) {

			cout << "Введите элемент " << i + 1 << " " << j;

			cin >> a[i][j];

		}
	}
		cout << "Исходная матрица:\n ";
		for (i = 0; i < n - 1; i++) {

			for (j = 0; j < n - 1; j++)

				cout << a[i][j] << " ";
			cout << "\n";

		}

		for (i = 0; i < n - 1; i++) {

			for (j = i + 1; j < n - 1; j++)

			{
				temp = a[i][j];

				a[i][j] = a[j][i];

				a[j][i] = temp;

			}

		}cout << "Транспортированная матрица:\n ";

		for (i = 0; i < n - 1; i++) {

			for (j = 0; j < n - 1; j++)

				cout  << a[i][j]<< " ";
			cout << "\n";

		}

		return 0;

	}
	


