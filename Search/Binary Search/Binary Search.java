import java.util.Scanner; // For taking inputs

class Binary_Search
{
	public static void main(String args[])
	{
		Scanner input = new Scanner(System.in);

		int N;
		System.out.print("\n Array size : ");
		N = input.nextInt();

		int A[] = new int[N];
		System.out.print("\n Enter elements (ascending order) : ");

		for(int i = 0; i < N; ++i)
			A[i] = input.nextInt();

		int element;
		System.out.print("\n Enter element to be searched : ");
		element = input.nextInt();

		// Binary Search
		//---------------
		int left = 0, right = N, mid;

		while(right > left + 1)
		{
			mid = (int)((left + right)/2); // Observe the explicit type casting in Java

			if(A[mid] == element)
			{
				System.out.println("\n Element " + element + " found at index : " + mid);
				break;
			}

			else if(A[mid] < element)
				left = mid;

			else if(A[mid] > element) // Or simply use : else
				right = mid;
		}

		if(right <= left + 1)
			System.out.println("\n Element not found");
	}
}