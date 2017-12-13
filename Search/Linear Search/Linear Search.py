N = int(input("\n Array size : "))

print("\n Enter elements : ", end="")

A = list(map(int, input().split()))

element = int(input("\n Enter element to be searched : "))

# Linear Search
#---------------
for i in range(N):
	if A[i] == element:
		print("\n Element", element, "found at index :", i)
