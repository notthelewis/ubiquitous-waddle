def merge_sort(arr):
	""" Simple merge sort algorithm. For every input array of length >= 1:
			mergesort performs at most:
				6n log2 n + 6
n	"""
	if len(arr) > 1:
		mid = len(arr) // 2
		L = arr[:mid]
		R = arr[mid:]

		merge_sort(L)
		merge_sort(R)

		i = j = k = 0

		while i < len(L) and j < len(R):
			if L[i] < R[j]:
				arr[k] = L[i]
				i += 1
			else:
				arr[k] = R[j]
				j += 1
			k += 1

		while i < len(L):
			arr[k] = L[i]
			i += 1
			k += 1

		while j < len(R):
			arr[k] = R[j]
			j += 1
			k += 1


array = [2, 20, 1, 10, 3, 40, 4]

#	Unsorted
for i in array:
	print(i)		

merge_sort(array)

for i in array:
	print(i)
