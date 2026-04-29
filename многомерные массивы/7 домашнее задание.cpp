
// Массив строк в алфавитном порядке
#include<iostream>
#include<string>

using namespace std;

int main() {

	system("chcp 1251");

	string arr[] = { "яблоко", "банан", "вишня", "апельсин", "груша" }; // Массив строк

	int n = 5;

	cout << "Исходный массив"; // Вывод исходного массива

	for (int i = 0; i < n; i++) {

		cout << arr << " ";

	}

	cout << " ";


	for (int i = 0; i < n - 1; i++) { // Сортировка пузырьком в алфавитном порядке

		for (int j = 0; j < n - 1; j++) {

			if (arr[j] > arr[j + 1]) {

				string temp = arr[j]; // Меняем местами

				arr[j] = arr[j + 1];

				arr[j + 1] = temp;
			}
		}
	}

	cout << "Отсортированный массив: "; // Вывод отсотированного массива

	for (int i = 0; i < n; i++) {

		cout << arr[i] << " ";
	}

	cout << " ";

	return 0; // Завершение
}