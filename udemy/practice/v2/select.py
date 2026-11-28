def select(arr):
    for i in range(0, len(arr)):
        exchange(arr, i)

# i = index
def exchange(arr, i):
    min = i
    for j in range(i+1, len(arr)):
        if arr[j] < arr[min]:
            min = j
    arr[i], arr[min] = arr[min], arr[i] 

org_list = [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8]
select(org_list)
print(org_list)