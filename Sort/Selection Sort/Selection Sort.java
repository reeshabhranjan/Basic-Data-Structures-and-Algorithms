import java.util.Scanner; // For taking input

class Selection_Sort
{
	public static void main(String args[])
	{
		Scanner input = new Scanner(System.in);

		int N;
		System.out.print("\n Array size : ");
		N = input.nextInt();

		int A[] = new int[N], index, temp;
		System.out.print("\n Enter elements : ");

		for(int i = 0; i < N; ++i)
			A[i] = input.nextInt();

		// Selection Sort
		//----------------
		for(int i = 0; i < N-1; ++i)
		{
			index = i;

			// Finding smallest unsorted element
			//-----------------------------------
			for(int j = (i+1); j < N; ++j)
			{
				if(A[index] > A[j])
					index = j;
			}

			// Swapping
			//----------
			temp = A[i];
			A[i] = A[index];
			A[index] = temp;
		}

		System.out.print("\n Sorted Array : ");

		for(int i = 0; i < N; ++i)
			System.out.print(A[i] + " ");
	}
}