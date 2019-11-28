#include <iostream>
#include <cstdlib>// Для rand
#include <iomanip>// Для setw
#include <ctime> //Для time

using namespace std;
int const N = 4;

int main(void)
{
	setlocale(0, "rus");
	srand(time(NULL));
	int A[N][N], Max, number, sum = 0, j;

	for (int i = 0; i < N; i++)
	{
		
		for (int j = 0; j < N; j++)
		{
			cout << "Введите число " << j + 1 << " строки №" << i + 1 << ": ";
			cin >> A[i][j];
		}
		cout << endl;
	}

	for (int i = 0; i < N; i++)
	{
		
		for (int j = 0; j < N; j++)
		{

			cout << setw(4) << A[i][j];
		}
		cout << endl;
	}


	
	int B[N];
		B[N-1] = sum;
	cout << "Сума всех индексов максимальних елементов каждой строки: " << B[N-1];
	return 0;
}
