
# 選択ソート
# 最小値を見つけ、先頭と交換

# 未ソート部分から最小の要素の「位置」minを特定する
# 先頭の要素と入れ替える
# def select_sort(arr):
#     # 選択する
#     for i in range(0, len(arr)-1):
#         select_min(arr, i)

# def select_min(arr, i):
#     min_idx = i
#     for j in range(i + 1, len(arr)):
#         if arr[min] > arr[j]:
#             min = j
#     arr[min_idx], arr[i] = arr[i], arr[min_idx]

# select_sort(org_list)
# print("select_sort", org_list)


# 挿入ソート
# 未整列要素の挿入をどこに入れるかを考える
# 先頭をソート済みとする
# 未ソート部分の先頭から要素を取り出しtmpに保存する
# ソート済みの要素において、tmpよりも大きい数を後方に一つずつ移動
# 開いたところにtmpを挿入
# def insert_sort(arr):
#     # 先頭の要素は整列済みとみなす
#     for i in range(1, len(arr)):
#         insert(arr, i)

# # 一回ぶんの探索関数
# def insert(arr, i):
#     tmp = arr[i]
#     # 後方に一つずつ確認していく
#     # for i in range(i-1, 0, -1)だと1までしか進まない。stopを-1にすることで0まですすむ
#     for j in range(i-1, -1, -1):
#         # tmpより大きかったら後方に一つずつずらす
#         if tmp < arr[j]:
#             arr[j+1] = arr[j]
#         # tmpより小さかったらtmpを比較しているj+1の場所に保存でソート済み
#         else:
#             arr[j+1] = tmp
#             break
#     else:
#         arr[0] = tmp

org_list = [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8]
# insert_sort(org_list)
# print(org_list)
            
# バブルソート
# 隣り合う要素を比較して交換
# 最小要素が先頭に浮かび上がってくる
# def bubble_sort(arr):
#     for i in range(0, len(arr)-1):   
#         sort(arr, i) 

# def sort(arr, i):
#     for j in range(len(arr)-1, i, -1):
#         if arr[j-1] > arr[j]:
#             arr[j-1], arr[j] = arr[j], arr[j-1]

# bubble_sort(org_list)
# print(org_list)
