#include <iostream>
#include <conio.h> // For getch()

using namespace std;

const int MAX = 10;

void push(int stack[], int &N)
{
	if(N < MAX - 1)
	{
		cout << "\n Enter element to push : ";
		cin >> stack[++N];
	}
	else
	{
		cout << "\n Error : Stack is full";
		getch();
	}
}

void pop(int stack[], int &N)
{
	if(N > -1)
		cout << "\n Element " << stack[N--] << " has been popped";
	else
		cout << "\n Error : Stack is empty";

	getch();
}

void display(int stack[], int N)
{
	cout << "\n  Stack Status : \n";
	cout << " ----------------\n\n";

	for(int i = N; i >= 0; --i)
		cout << '\t' << stack[i] << endl;

	getch();
}

int main()
{
	int stack[MAX], N = -1, choice;
	// N tells till which position is the stack currently filled up to
	// When we start, the stack is empty, therefore, N = -1

	do
	{
		system("cls");

		cout << "\n Select operation : \n";
		cout << "\n     1. Push    ";
		cout << "\n     2. Pop     ";
		cout << "\n     3. Display ";
		cout << "\n     4. Exit    \n";
		cout << "\n Enter choice : ";
		cin >> choice;

		switch(choice)
		{
			case 1 : push(stack, N); break;
			case 2 : pop(stack, N); break;
			case 3 : display(stack, N); break;
			case 4 : return 0;
			default : return 0;
		}
	}while(choice != 4);

	return 0;
}