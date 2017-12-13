#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "\n Array size : ";
	cin >> n;

	int a[n], index, temp;
	cout << "\n Enter elements : ";

	for(int i = 0; i < n; ++i)
		cin >> a[i];

	// Selection Sort
	//----------------
	for(int i = 0; i < (n-1); ++i)
	{
		index = i;

		for(int j = (i+1); j < n; ++j)
		{
			if(a[index] > a[j]) // For decreasing : if(a[index] < a[j])
				index = j;
		}

		// Swapping
		//----------
		temp = a[i];
		a[i] = a[index];
		a[index] = temp;
	}

	cout << "\n Sorted Array : ";

	for(int i = 0; i < n; ++i)
		cout << a[i] << " ";

	return 0;
}