# pivotを決めて大きさに合わせて、配列を分割
# 前方の配列に対してquick_sort
# 後方の配列に対してquick_sort
# 整列済みの部分配列をpivotと連結して返す

def quick_sort(arr):
    # arrf, arrbが空で来る時がある
    # pivot = arr[0]
    # if len(arr) == 2:
    #     if pivot >= arr[1]:
    #         return arr[1] + [pivot]
    #     if pivot < arr[1]:
    #         return  [pivot] + arr[0]
    if len(arr) < 2:
        return arr
    pivot = arr[0]
    arrf, arrb = divide(pivot, arr[1:])
    return quick_sort(arrf) + [pivot] + quick_sort(arrb)

def divide(p, arr):
    left = []
    right = []
    for i in arr:
        if i < p:
            left.append(i)
        if i >= p:
            right.append(i)
    return left, right

org_list = [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8]
print(quick_sort(org_list))