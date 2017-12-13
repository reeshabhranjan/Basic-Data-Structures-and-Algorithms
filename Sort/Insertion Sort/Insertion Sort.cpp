#include <iostream>

using namespace std;

int main()
{
	int N;
	cout << "\n Array size : ";
	cin >> N;

	int A[N], key, j;
	cout << "\n Enter elements : ";

	for(int i = 0; i < N; ++i)
		cin >> A[i];

	// Insertion Sort
	//----------------
	for(int i = 1; i < N; ++i)
	{
		key = A[i];
		j = i - 1;
		
		while(j >= 0 && key < A[j])
			A[j+1] = A[j--];

		A[j+1] = key;
	}

	cout << "\n Sorted Array : ";

	for(int i = 0; i < N; ++i)
		cout << A[i] << " ";

	return 0;
}