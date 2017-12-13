#include <iostream>

using namespace std;

int main()
{
	int N;
	cout << "\n Array size : ";
	cin >> N;

	int A[N];
	cout << "\n Enter elements (ascending order) : ";

	for(int i = 0; i < N; ++i)
		cin >> A[i];

	int element;
	cout << "\n Enter element to be searched : ";
	cin >> element;

	// Binary Search
	//---------------
	int left = 0, right = N, mid;

	while(right > left + 1)
	{
		mid = int((left + right)/2);

		if(element == A[mid])
		{
			cout << "\n Element " << element << " found at index : " << mid << endl;
			break;
		}
		
		else if(element < A[mid])
			right = mid;
		
		else if(element > A[mid]) // Or simply, use : else
			left = mid;
	}

	if(right <= left + 1)
		cout << "\n Element not found\n";

	return 0;
}