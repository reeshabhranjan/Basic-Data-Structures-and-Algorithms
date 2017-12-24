N = int(input("\n Array size : "))

A = list(map(int, input("\n Entere elements : ").split()))

frequencies = [0 for i in range(max(A) + 1)]

for i in range(N):
	frequencies[A[i]] += 1

B = [] # Sorted array

# Counting Sort
#---------------
for i in range(len(frequencies)):
	for j in range(frequencies[i]):
		B.append(i)

print("\n Sorted Array : ", end="")

for i in range(len(A)):
	print(B[i], end=" ")