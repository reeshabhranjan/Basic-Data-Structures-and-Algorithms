#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int N;
	cout << "\n Array size : ";
	cin >> N;

	int A[N], max;
	cout << "\n Enter elements : ";

	cin >> A[0];
	max = A[0];

	for (int i = 1; i < N; ++i)
	{
		cin >> A[i];

		if(max < A[i])
			max = A[i];
	}

	int frequencies[max + 1];

	for (int i = 0; i < max + 1; ++i)
		frequencies[i] = 0;

	for (int i = 0; i < N; ++i)
		++frequencies[A[i]];

	// Counting Sort
	//---------------
	for (int i = 0, k = 0; i < max + 1; ++i)
	{
		for(int j = 0; j < frequencies[i]; ++j)
			A[k++] = i;
	}

	cout << "\n Sorted Array : ";
	for (int i = 0; i < N; ++i)
		cout << A[i] << " ";

	return 0;
}