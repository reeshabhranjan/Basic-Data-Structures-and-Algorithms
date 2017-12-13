from os import system # For system("cls")

MAX = 10

def push(stack, N):
	if N < MAX - 1:
		stack.append(int(input("\n Enter element to push : ")))
	else:
		print("\n Error : Stack is full")
		input()


def pop(stack, N):
	if N > -1:
		print("\n Element", stack[N], "has been popped")
		stack.pop()
	else:
		print("\n Error : Stack is empty")

	input()


def display(stack, N):
	print("\n  Stack Status : ")
	print("  ----------------")

	if N > -1:
		for i in range(N, -1, -1):
			print('\t', stack[i])
	else:
		print("\n Stack is empty")

	input()


# Main Script
#-------------
stack = []
N = -1
# N tells till which position is the stack currently filled up to
# When we start, the stack is empty, therefore, N = -1

choice = 0

while choice != 4:
	system("cls")

	print("\n Select operation : \n")
	print("     1. Push    ");
	print("     2. Pop     ");
	print("     3. Display ");
	print("     4. Exit    ");
	print("\n Enter choice : ", end="");

	choice = int(input())

	if choice == 1:
		push(stack, N)
		if N < MAX - 1:
			N += 1

	elif choice == 2:
		pop(stack, N)
		if N > -1:
			N -= 1

	elif choice == 3:
		display(stack, N)

	elif choice == 4:
		exit(0) # Indicates a clean exit

	else:
		exit(1) # Indicates that there were some errors
