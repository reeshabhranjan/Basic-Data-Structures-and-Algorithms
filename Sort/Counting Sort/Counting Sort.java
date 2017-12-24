import java.util.Scanner; // For taking inputs

class Counting_Sort
{
	public static void main(String args[])
	{
		Scanner input = new Scanner(System.in);

		int N;
		System.out.print("\n Array size : ");
		N = input.nextInt();

		int A[] = new int[N], max;
		System.out.print("\n Enter elements : ");

		A[0] = input.nextInt();
		max = A[0];

		for (int i = 1; i < N; ++i)
		{
			A[i] = input.nextInt();

			if (max < A[i])
				max = A[i];
		}

		int frequencies[] = new int[max + 1];

		for (int i = 0; i < max + 1; ++i)
			frequencies[i] = 0;

		for (int i = 0; i < N; ++i)
			++frequencies[A[i]];

		// Counting Sort
		//---------------
		for (int i = 0, k = 0; i < max + 1; ++i)
		{
			for (int j = 0; j < frequencies[i]; ++j)
				A[k++] = i;
		}

		System.out.print("\n Sorted Array : ");

		for (int i = 0; i < N; ++i)
			System.out.print(A[i] + " ");
	}
}