#include <iostream> 
#include <cstdlib>
#include <ctime>


int main() {
	setlocale(LC_ALL, "Ru");
	int n;
	// Task 1 
	/*const int size = 10;
	int arr1[size];
	std::cout << " Задание 1. \n Изначальный массив. \n";
	srand(time(NULL));
	int sr = 0;
	for (int i = 0; i < size; i++) {
		arr1[i] = rand() % 51;
		std::cout << arr1[i] << ' ';
		sr += arr1[i];
	}
	double v = (double)sr / size;
	std::cout << "\n Среднее значение = " << v;
	std::cout << std::endl;
	for (int i = 0; i < size; i++)
		if (v > arr1[i])
			std::cout << arr1[i] << ' ';
	*/

	// Task 2
	int const z = 5;
	int const m = 5;
	int arr1[z][m], arr2[z][m], arr3[z][m];
	srand(time(NULL));
	std::cout << "Задaча 2.\n\n";
	std::cout << "Даны два массива:\n";
	std::cout << "Первый массив:\n";
	for (int i = 0; i < z; ++i){
		for (int j = 0; j < m; ++j){
			arr1[i][j] = rand() % 10;
			std::cout << arr1[i][j] << "  ";
		}
		std::cout << "\n";
	}
	std::cout << "\n\n";
	std::cout << "Второй массив:\n";
	for (int i = 0; i < z; ++i){
		for (int j = 0; j < m; ++j){
			arr2[i][j] = rand() % 10;
			std::cout << arr2[i][j] << "  ";
		}
		std::cout << "\n";
	}
	std::cout << "\n\n";
	std::cout << "Попарное сложение массивов:\n";
	for (int i = 0; i < z; ++i){
		for (int j = 0; j < m; ++j){
			arr3[i][j] = arr1[i][j] + arr2[i][j];
			std::cout << arr3[i][j] << "  ";
		}
		std::cout << "\n";
	}
	std::cout << "\n\n";
	
	// Task 3
	std::cout << "Введите шестизначное число: ";
	int N;
	std::cin >> N;
	int const f = 6;
	int arr[f];
	if ((N / 100000) > 0 && (N / 1000000) == 0){
		for (int i = 5; i >= 0; --i){
			arr[i] = N % 10;
			N = N / 10;
		}
		std::cout << "Массив: ";
		for (int i = 0; i < 6; ++i)
			std::cout << arr[i] << " ";
	}
	else
		std::cout << "Неверное число";
	std::cout << "\n";

	return 0;
}