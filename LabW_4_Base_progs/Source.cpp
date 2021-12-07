#include <iostream>
#include <time.h>
#define N 5
#define M 8
#define H 2
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	/*1) Отсортируйте одномерный массив, состоящий из N вещественных элементов,
	по возрастанию (отсортируйте своими силами без использования специальных
	функций сортировки).*/

	/*float c, arr[N]{0};

	for (int i = 0; i < N; i++) {
		arr[i] = rand()%100;
	};

	for (int i = 0; i < (N-1); i++){
		for (int j = 0; j < (N-1); j++) {
			if (arr[j] > arr[j + 1]) {
				c = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = c;
			}
		}
	}


	for (int i = 0; i < N; i++) cout << arr[i]<<"  ";
	cout << endl;
	*/

	/*2) Дана целочисленная матрица A(N, M). Вычислите и запомните сумму и
	количество положительных элементов каждого столбца матрицы. Результаты
	выведите в две строки (в первой – суммы, во второй – количество).*/

	int c(0), s(0), arr[N][M]{ 0 }, ar1[H][M]{ 0 };

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			arr[i][j] = rand() % (100 + 100 + 1) - 100;
		}
	};

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << arr[i][j] << "\t";
		}cout << endl;
	};

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {

			if (arr[j][i] >= 0) {
				c += 1;
				s += arr[j][i];
			}
		}
		ar1[0][i] = c; ar1[1][i] = s; c = 0; s = 0;
	};
	cout << endl;
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < M; j++) {
			cout << ar1[i][j] << "\t";
		}cout << endl;
	}
}