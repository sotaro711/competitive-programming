def quick_sort(arr):
    # for i in range(0, len(arr)):
    #     p = arr[0]
    #     tan_left = []
    #     tan_right = []

    #     if len(arr) < 2:
    #         return [arr[0]]

    #     if p > arr[i]:
    #         tan_left.append(arr[i])
    #     elif p <= arr[i]:
    #         tan_right.append(arr[i])

    # return quick_sort(tan_left) + [p] + quick_sort(tan_right)
    if len(arr) < 2:
        return arr

    pivot = arr[0]
    arrf, arrb = divide(arr[1:], pivot)

    return quick_sort(arrf) + [pivot] + quick_sort(arrb)

def divide(arr, p):
    left = []
    right = []
    for i in arr:
        if p > i:
            left.append(i)
        if p <= i:
            right.append(i)
    return left, right




org_list = [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8] 
print(quick_sort(org_list))