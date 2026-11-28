def insert_sort(arr):
    for i in range(1,len(arr)):
        insert(arr, i)

def insert(arr, i):
    key = arr[i]
    for j in range(i-1, -1, -1):
        # if arr[j] < arr[i] and arr[j-1] < arr[i]:
            # 挿入したい
        if key < arr[j]:
            arr[j+1] = arr[j]
        else:
            arr[j+1] = key
            break
    else:
        arr[0] = key
            
org_list = [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8]
insert_sort(org_list)
print(org_list)