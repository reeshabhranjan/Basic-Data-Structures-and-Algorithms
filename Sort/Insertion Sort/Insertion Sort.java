import java.util.Scanner; // For taking inputs

class Insertion_Sort
{
	public static void main(String args[])
	{
		Scanner input = new Scanner(System.in);

		int N;
		System.out.print("\n Array size : ");
		N = input.nextInt();

		int A[] = new int[N], key, j;
		System.out.print("\n Enter elements : ");

		for(int i = 0; i < N; ++i)
			A[i] = input.nextInt();

		// Insertion Sort
		//----------------
		for(int i = 1; i < N; ++i)
		{
			key = A[i];
			j = i - 1;

			while(j >= 0 && key < A[j]) // Write j>=0 first as in case j < 0 the expression becomes false
				A[j+1] = A[j--];

			A[j+1] = key;
		}

		System.out.print("\n Sorted Array : ");

		for(int i = 0; i < N; ++i)
			System.out.print(A[i] + " ");
	}
}