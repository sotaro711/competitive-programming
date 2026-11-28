def insert(arr):
    for i in range(1, len(arr)):
        exchange(arr, i)
    return arr

def exchange(arr, i):
    key = arr[i]
    for j in range(i-1, -1, -1):
        # if j-1 == 0:
        #     arr[j-1] = arr[i]
        # if arr[j] < arr[i] and arr[j-1] <= arr[i]:
        #     arr[j+1] = arr[j]
        #     arr[j] = key
        #     break
        # arr[j+1] = arr[j]
        # arr[j] = arr[j-1]
        if arr[j] > key:
            arr[j+1] = arr[j]
        else:
            arr[j+1] = key
            break
    # for...else文で、for文が最後まで回り切った時に実行する
    else:
        arr[0] = key
    print("arr: ", arr)

        
# org_list = [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8]
org_list = [2,4,1,6,5,3]
ans = insert(org_list)
print(ans)