org_list = [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8]

# 選択ソート
# 最小値を見つけ、先頭と交換

# 未ソート部分から最小の要素の「位置」minを特定する
# 先頭の要素と入れ替える
def select_sort(arr):
    # 選択する
    for i in range(0, len(arr)-1):
        select_min(arr, i)

def select_min(arr, i):
    min_idx = i
    for j in range(i + 1, len(arr)):
        if arr[min] > arr[j]:
            min = j
    arr[min_idx], arr[i] = arr[i], arr[min_idx]

select_sort(org_list)
print("select_sort", org_list)
# 挿入ソート
# バブルソート

