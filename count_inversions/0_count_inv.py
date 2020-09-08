def merge_count_inversions(arr):
  """ Uses merge sort to count every inversion in a given array of numbers """
	i = j = k = splitInv = 0

	if len(arr) > 1:
		mid = len(arr) // 2
		L = arr[:mid]
		R = arr[mid:]

		# Recursively calls itself, to sort the two halves of current iteration 
		merge_count_inversions(L)
		merge_count_inversions(R)

		while i < len(L) and j < len(R):
			if L[i] < R[j]:
				arr[k] = L[i]
				i += 1
			else:
				arr[k] = R[j]
				j += 1
				splitInv += mid - i + 1
			k += 1

	#	Cleans up if the array size is not an even number
		while i < len(L):
			arr[k] = L[i]
			i += 1
			k += 1

		while j < len(R):
			arr[k] = R[j]
			j += 1
			k += 1

		# Because the computer counts from zero

		splitInv += 1
	return(array, splitInv)

array = [1, 3, 5, 2, 4, 6]

#	Unsorted
print(array)

i, j = merge_count_inversions(array)

print(i)
print(j)
