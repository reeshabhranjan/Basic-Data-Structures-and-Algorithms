#include <iostream>

using namespace std;

int* MergeSort(int A[], int N);
int* Merge(int left[], int length_left, int right[], int length_right);

int* MergeSort(int A[], int N)
{
	if(N == 1)
		return A;
	else
	{
		int mid = int(N / 2);
		int* left  = new int[mid];
		int* right = new int[N-mid];

		for(int i = 0; i < mid; ++i)
			left[i] = A[i];

		for(int i = 0; i < (N - mid); ++i)
			right[i] = A[mid + i];

		left = MergeSort(left, mid);
		right = MergeSort(right, (N-mid));

		return Merge(left, mid, right, (N-mid));
	}
}

int* Merge(int left[], int length_left, int right[], int length_right)
{
	int i = 0, j = 0;
	int* A = new int[ (length_left + length_right) ];

	while(i < length_left && j < length_right)
	{
		if(left[i] <= right[j])
		{
			A[i+j] = left[i]; // Important: left[i++] will NOT work
			++i;
		}
		else
		{
			A[i+j] = right[j]; // Important: right[j++] will NOT work
			++j;
		}
	}

	// Inserting leftover sorted elements of the sublist left or right
	// into our final sorted array A, as it is
	if(i < length_left)
	{
		for( ; i < length_left; ++i)
			A[i+j] = left[i];
	}
	else if(j < length_right)
	{
		for( ; j < length_right; ++j)
			A[i+j] = right[j];
	}

	return A;
}

int main()
{
	int N; 
	cout << "\n Array size : ";
	cin >> N;

	int* A = new int[N];
	cout << "\n Enter elements : ";

	for(int i = 0; i < N; ++i)
		cin >> A[i];

	cout << "\n Sorted Array : ";

	A = MergeSort(A, N);

	for(int i = 0; i < N; ++i)
		cout << A[i] << " ";

	return 0;
}