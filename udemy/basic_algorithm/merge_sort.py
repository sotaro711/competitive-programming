# 対象の配列を二つの部分配列に分割
# それぞれをマージソートによって整列
# 整列済みの二つの部分配列をマージ

# n個のデータの配列をn/2個の要素の配列２つに分割（divide）
# その二つの部分配列をそれぞれmerge_sortでsortする(slove)
# 得られたソート済みの部分配列をmergeする(conquer)

org_sort =  [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8] 

# # まずorg_sortを二つに分割
# org_sort1 = []
# for i in range(0, len(org_sort) // 2):
#     org_sort1.append(org_sort[i])

# org_sort2 = []
# for i in range(len(org_sort) // 2, len(org_sort)):
#     org_sort2.append(org_sort[i])

# # それぞれをマージソートによって分割
# # マージソートとは？


# print("org_sort1", org_sort1)
# print("org_sort2", org_sort2)


# # 分割
def merge_sort(arr):
    if len(arr) < 2:
        return arr
    mid = len(arr) // 2
    return merge(merge_sort(arr[:mid]), merge_sort(arr[mid:]))

# マージ
def merge(arrf, arrb):
    if len(arrf) < 1:
        return arrb
    if len(arrb) < 1:
        return arrf
    if arrf[0] <= arrb[0]:
        return [arrf[0]] + merge(arrf[1:], arrb)
    else:
        return [arrb[0]] + merge(arrf, arrb[1:])
print(merge_sort(org_sort))
print(org_sort)