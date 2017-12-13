N = int(input("\n Array size : "))

print("\n Enter elements : ", end="")

A = list(map(int, input().split()))

for i in range(1, N):
	key = A[i]
	j = i-1

	while j >= 0 and key < A[j]:
		A[j+1] = A[j]
		j -= 1

	A[j+1] = key

print("\n Sorted Array : ", end="")

for i in range(N):
	print(A[i], end=" ")
