# ①

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

# ②
# 1, 1, ,2, 3, 5, 8,...
# fib(n) = fib(n-1) + fib(n-2)
# 与えられた問題を小さな問題に分割
# 部分問題を解く
# 合体する 

# def fib(n):
# 	if n == 1 or n == 0:
# 		return 1
# 	return fib(n-1) + fib(n-2)

# for i in range(35):
# 	print(fib(i))

# 同じ問題を複数回計算しているので無駄が多い


# めもかフィボナッチ
# 計算した結果をmemo[]の保存
# def memo_fib(n):
# 	memo = [None] * (n+1)

# 	def _fib(n):
# 		if n == 0 or n == 1:
# 			return 1
# 		if memo[n] != None:
# 			return memo[n]
# 		memo[n] = _fib(n-1) + _fib(n-2)
# 		return memo[n]
# 	return _fib(n)

# for i in range(35):
# 	print(memo_fib(i))

# マージソート
# nこの要素を含む配列をそれぞれ n/2個に分割する(divide)
# その二つの部分配列をそれぞれmerge_sortでソートする(solve)
# 得られたソート済み部分配列をmergeで統合する(conquer)

def merge_sort(arr):
    if len(arr) < 2:
        return arr
    # 配列を二つに分割
    mid = len(arr) // 2
    # arr1, arr2 = arr[:mid], arr[mid:]
    return merge(merge_sort(arr[:mid]), merge_sort(arr[mid:]))

def merge(arrf, arrb):
    if len(arrf) < 1:
        return arrb
    if len(arrb) < 1:
        return arrf
    if arrf[0] <= arrb[0]:
        return [arrf[0]] + merge(arrf[1:], arrb)
    else:
        return [arrb[0]] + merge(arrf, arrb[1:])

# print(merge_sort(org_list))

# nこの要素はlog_2N回分割
# 8=>4=>2=>1
# 分割の数だけmergeが必要
# O(nlogn)

# ③
# クイックソート
# ピボットを基準に二つに分割(divide)
# 前方の配列にquick_sort(solve)
# 後方の配列にquick_sort(solve)
# 整列部分とピボットを連結して返す(conquer)
# org_list = [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8]

# def quick_sort(arr):
#     if len(arr) < 2:
#         return arr
#     p = arr[0]
#     arrf, arrb = divide(p, arr[1:])
#     return quick_sort(arrf) + [p] + quick_sort(arrb)

# def divide(p, arr):
#     left = []
#     right = []
#     for i in arr:
#         if p > i:
#             left.append(i)
#         else:
#             right.append(i)
#     print(left, right)
#     return left, right

# print(quick_sort(org_list))

# バケットソート
# カウンタ配列を作る（カウンタ配列の長さは元の配列の長さの最大値）
# ex) A: [1, 4, 2, 0, 3, 2, 2, 4] => [1, 1, 3, 1, 2]
# カウンタ配列の累積和が、配列Aの要素の移動先になる
# [1, 2, 5, 6, 8]
#  [ , , , , , , , 4] => [1, 2, 5, 6, 7]

org_list =  [17, 11, 11, 5, 14, 9, 6, 19, 4, 10, 1, 19, 13, 5, 0, 2, 13, 18, 7, 8]

def bucket_sort(arr):
    # カウンタ並列の作成
    arrc = [0] * (max(arr) + 1)
    for i in arr:
        arrc[i] += 1
    print("カウンタ配列", arrc)
    # 累積和を求める
    for j in range(1, len(arrc)):
        arrc[j] = arrc[j] + arrc[j-1]
    print("累積和", arrc)
    # ソート先の配列を用意して一つずつ代入
    arrs = [0] * len(arr)
    for i in reversed(arr):
        arrs[arrc[i]-1] = i
        arrc[i] -= 1
    return arrs
print(bucket_sort(org_list))