import java.util.Scanner; // For taking inputs

class Linear_Search
{
	public static void main(String args[])
	{
		Scanner input = new Scanner(System.in);

		int N;
		System.out.print("\n Arrays size : ");
		N = input.nextInt();

		int A[] = new int[N];
		System.out.print("\n Enter elements : ");

		for(int i = 0; i < N; ++i)
			A[i] = input.nextInt();

		int element;
		System.out.print("\n Enter element to be searched : ");
		element = input.nextInt();

		// Linear Search
		//---------------
		for(int i = 0; i < N; ++i)
		{
			if(A[i] == element)
				System.out.println("\n Element " + element + " found at index : " + i);
		}
	}
}