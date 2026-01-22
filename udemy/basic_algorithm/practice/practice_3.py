# org_list = [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8]
# 選択ソート
# 未ソート部分から要素の最小値minを決める
# 
# def select_sort(arr):
#     for i in range(0, len(arr)-1):
#         exchange(arr, i)
#     return arr

# def exchange(arr, i):
#     min = i
#     for j in range(i+1, len(arr)):
#         if arr[min] > arr[j]:
#             min = j
#     arr[i], arr[min] = arr[min], arr[i]

# print(select_sort(org_list))

# 挿入ソート
# 先頭をソート済み
# tmpに保存
# tmp < arr[i-1]だったら右に一つずつ増やす

# org_sort = [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8]
# def insert_sort(arr):
#     for i in range(1, len(arr)):
#         exchange(arr, i)
#     print(arr)

# def exchange(arr, i):
#     tmp = arr[i]
#     for j in range(i-1, -1, -1):
#         if tmp < arr[j]:
#             arr[j+1] = arr[j]
#         else:
#             arr[j+1] = tmp
#             break
#     else:
#         arr[0] = tmp
#     return

# print(insert_sort(org_sort))

# バブルソート
# 後ろから比べて小さかったら前に出す
# org_list =  [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8] 

# def buble_sort(arr):
#     for i in range(0, len(arr)-1):
#         exchange(arr, i)
#     return arr
# def exchange(arr, i):
#     for j in range(len(arr)-1, i, -1):
#         if arr[j] < arr[j-1]:
#             arr[j], arr[j-1] = arr[j-1], arr[j]
# print(buble_sort(org_list))

# フィボナッチ数列
# 1, 1, 2, 3, 5, 8, ...
# 再帰関数を使う
# f(n) = f(n-1) + f(n-2)
# def fib(n):
#     if n == 0 or n == 1:
#         return 1
#     return fib(n-1) + fib(n-2)

# for i in range(35):
#     print(fib(i))

# 計算が遅い
# メモ化フィボナッチをする
# def _fib(n):
#     memo = [None] * (n+1)

#     def fib_memo(n):   
#         if n == 0 or n == 1:
#             return 1
#         if memo[n] != None:
#             return memo[n]
#         memo[n] = fib_memo(n-1) + fib_memo(n-2)
#         return memo[n]
#     return fib_memo(n)

# for i in range(35):
#     print(_fib(i))

# マージソート
# 配列を二つに分割
# org_list =  [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8] 

# def merge_sort(arr):
#     if len(arr) < 2:
#         return arr
#     mid = len(arr) // 2
#     return merge(merge_sort(arr[:mid]), merge_sort(arr[mid:]))

# def merge(arrf, arrb):
#     if len(arrf) < 1:
#         return arrb
#     if len(arrb) < 1:
#         return arrf
#     if arrf[0] <= arrb[0]:
#         return [arrf[0]] + merge(arrf[1:], arrb)
#     else:
#         return [arrb[0]] + merge(arrf, arrb[1:])

# print(merge_sort(org_list))

# クイックソート
# org_list =  [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8]

# ピポットを決めてそれを要素と比べて配列を組み立てる
# def quick_sort(arr):
#     if len(arr) < 2:
#         return arr
#     p = arr[0]
#     arrf, arrb = divide(p, arr[1:])
#     return quick_sort(arrf) + [p] + quick_sort(arrb)

# def divide(p, arr):
#     left = []
#     right = []
#     for j in arr:
#         if p > j:
#             left.append(j)
#         else:
#             right.append(j)
#     return left, right

# print(quick_sort(org_list))

# バケットソート
org_list =  [17, 11, 11, 5, 14, 9, 6, 19, 4, 10, 1, 19, 13, 5, 0, 2, 13, 18, 7, 8] 
test_list = [0, 1, 1, 1, 2, 2, 1, 3, 1, 2, 3]

def bucket_sort(arr):
    arrc = [0] * (max(arr)+1)
    for i in arr:
        arrc[i] += 1
    print(arrc)
    ans = []
    for j in range(0, len(arrc)):
        ans.extend([j]*arrc[j])
    print(ans)
bucket_sort(org_list)