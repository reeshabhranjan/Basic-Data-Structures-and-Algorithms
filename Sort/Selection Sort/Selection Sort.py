N = int(input("\n Array size : "))

print("\n Enter elements : ", end="")

A = list(map(int, input().split()))

# Selection Sort
#----------------
for i in range(N - 1):
	index = i

	for j in range((i+1), N):
		if A[index] > A[j]:
			index = j

	# Swapping
	#----------
	A[i], A[index] = A[index], A[i]

print("\n Sorted Array : ", end="")

for i in range(N):
	print(A[i], end=" ")
