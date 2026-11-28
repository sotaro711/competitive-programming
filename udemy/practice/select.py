def select_sort(arr):
    for i in range(0, len(arr) - 1):
        exchange(arr, i)

def exchange(arr, i):
    minIndex = i
    # minのindexを探す
    for j in range(i+1, len(arr)):
        if arr[minIndex] > arr[j]:
            minIndex = j
    arr[minIndex], arr[i] = arr[i], arr[minIndex]
    
    

org_list = [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8]

select_sort(org_list)
print(org_list)