import java.util.Scanner; // For taking inputs

class Static_Stack
{
	final static int MAX = 10;

	public static void push(int stack[], int N)
	{
		if(N < MAX - 1)
		{
			Scanner input = new Scanner(System.in);
			System.out.print("\n Enter element to push : ");
			stack[++N] = input.nextInt();
		}
		else
		{
			System.out.println("\n Error : Stack is full");
		}
	}

	public static void pop(int stack[], int N)
	{
		if(N > -1)
			System.out.print("\n Element " + stack[N--] + " has been popped");
		else
			System.out.println("\n Error : Stack is empty");
	}

	public static void display(int stack[], int N)
	{
		System.out.println("\n  Stack Status : ");
		System.out.println(" ----------------");

		if(N > -1)
		{
			for(int i = N; i >= 0; --i)
				System.out.println("\t" + stack[i]);
		}
		else
		{
			System.out.println("\n Stack is empty");
		}
	}

	public static void main(String args[])
	{
		Scanner input = new Scanner(System.in);

		int stack[] = new int[MAX], N = -1;
		int choice;

		do
		{
			System.out.print("\n Select operation : \n");
			System.out.print("\n     1. Push    ");
			System.out.print("\n     2. Pop     ");
			System.out.print("\n     3. Display ");
			System.out.print("\n     4. Exit    \n");
			System.out.print("\n Enter choice : ");
			choice = input.nextInt();

			switch(choice)
			{
				case 1 : push(stack, N); if(N < MAX - 1){N += 1;}; break;
				case 2 : pop(stack, N); if(N > -1){N -= 1;}; break;
				case 3 : display(stack, N); break;
				case 4 : System.exit(0);
				default : System.exit(0);
			}

		}while(choice != 4);
	}
}