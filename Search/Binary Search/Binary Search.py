N = int(input("\n Array size : "))

print("\n Enter elements (ascending order) : ", end="")

A = list(map(int, input().split()))

element = int(input("\n Enter element to be searched : "))

# Binary Search
#---------------
left = 0
right = N

while right > left + 1:
	mid = (left + right) // 2

	if A[mid] == element:
		print("\n Element", element, "found at index :", mid)
		break

	elif A[mid] < element:
		left = mid

	elif A[mid] > element: # Or simply use : else:
		right = mid

if right <= left + 1:
	print("\n Element not found")
