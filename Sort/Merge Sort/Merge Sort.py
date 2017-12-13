def MergeSort(A):
	length = len(A)
	mid = length // 2

	if length == 1:
		return A
	else:
		left = MergeSort(A[ : mid])
		right = MergeSort(A[mid : ])
		
		return Merge(left, right)


def Merge(left, right):
	i = j = 0
	A = []

	while i < len(left) and j < len(right):
		if left[i] <= right[j]:
			A.append(left[i])
			i+=1
		else:
			A.append(right[j])
			j+=1

	if i < len(left):
		A.extend(left[i : ])
	elif j < len(right):
		A.extend(right[j : ])
	
	return A


# Main Script
#-------------
N = int(input("\n Array size : ")) # Not being used currently

print("\n Enter elements : ", end="")

A = list(map(int, input().split()))

A = MergeSort(A)

print("\n Sorted Array : ", end="")

for i in range(len(A)):
	print(A[i], end=" ")
