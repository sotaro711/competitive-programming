def buble(arr):
    for i in range(0, len(arr)):
        exchange(arr, i)
    return arr

def exchange(arr, i):
    for j in range(len(arrrrrrrr)-1, i, -1):
        if arr[j] < arr[j-1]:
            arr[j], arr[j-1] = arr[j-1], arr[j]


org_list = [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8]
ans = buble(org_list)
print(ans)