# 隣り合う要素を比較
# 順番が逆になっている隣接要素がなくなるまで繰り返す
# 配列が末尾から隣接している要素を隠して、大小が逆ならば交換する


org_list =  [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8]

def sort(arr):
    for i in range(0, len(arr) - 1):
        comp(arr, i)

def comp(arr, i):
    for j in range(len(arr) - 1, i, -1):
        if arr[j] < arr[j - 1]:
            arr[j], arr[j-1] = arr[j-1], arr[j]

sort(org_list)
print(org_list)

# 外側: 0 ~ n
# 内側: i ~ n
# n -1 , n -2, ..., 1よりO(n^2)

# 安定なソート：処理の前後でそれらの順番が瓦前後前後でそれらの順番が変わらない
# 隣接要素が等しい時は交換を行わないので安定