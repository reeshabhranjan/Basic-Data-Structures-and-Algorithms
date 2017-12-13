N = int(input("\n Array size : "))

print("\n Enter elements : ", end="")

A = list(map(int, input().split()))

# Bubble Sort
#-------------
for i in range(N - 1):
	for j in range(N - 1 - i):
		if A[j] > A[j+1]:
			# Swapping
			#----------
			A[j], A[j+1] = A[j+1], A[j]

print("\n Sorted Array : ", end="")

for i in range(N):
	print(A[i], end=" ")
