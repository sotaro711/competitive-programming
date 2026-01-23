# 選択ソート
# 未ソート部分から一番小さな値の位置minを特定
# 一番左と交換
# def select_sort(arr):
#     for i in range(0, len(arr)-1):
#         exchange(arr, i)

# def exchange(arr, i):
#     min = i
#     for j in range(i+1, len(arr)):
#         # iだと、jを追っている時に、最小値以降に出てきたiより小さい値をminにしてしまう
#         if arr[min] > arr[j]:
#             min = j
#     arr[i], arr[min] = arr[min], arr[i]

# org_list =  [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8] 
# select_sort(org_list)
# print(org_list)

# 挿入ソート
#　一番左の要素をソート済みとする
#  未ソート済みのはじめの要素をtmpに保存
# ソート済みの要素でtmpより大きければ、右に一つずつずらす
# def insert_sort(arr):
#     for i in range(1, len(arr)):
#         insert(arr, i)

# def insert(arr, i):
#     tmp = arr[i]
#     for j in range(i-1, -1, -1):
#         if arr[j] > tmp:
#             arr[j+1] = arr[j]
#         else:
#             # 比較しているところの一個後のjが開いているのでそこにぶち込む
#             arr[j+1] = tmp
#             #. tmpを入れた後に続けてしまうとj+1にまた入れてしまい、並びが崩れる
#             break
#     else:
#         arr[0] = tmp

# list = [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8] 
# insert_sort(list)
# print(list)

# バブルソート
# 最後の要素から未ソート部分まで隣同士の数を比べる
# 泡のように浮き上がってくる！！

# def buble_sort(arr):
#     # iはもう見なくても良い（ソート済み）の末端
#     for i in range(0, len(arr)-1):
#         exchange(arr, i)

# def exchange(arr, i):
#     for j in range(len(arr)-1, i, -1):
#         if arr[j] < arr[j-1]:
#             arr[j-1], arr[j] = arr[j], arr[j-1]
# list = [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8]
# buble_sort(list)
# print(list)

# def memo_fib(n):
#     memo = [None] * (n+1)
    
#     def _fib(n):
#         if n == 1 or n == 0:
#             return 1
#         if memo[n] != None:
#             return memo[n]
#         memo[n] = _fib(n-1) + _fib(n-2)
#         return memo[n]
#     return _fib(n)
# for i in range(35):
#     print(memo_fib(i))

# マージソート
# 未整列の配列を二つに分割
# それぞれにマージソートを適用
# さらにマージをする
# ぶんかつ => マージ
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

# list = [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8]
# print(merge_sort(list))

# ぅいっぅソート
# pivotを決める
# pより小さかったら左、大きかったら右に
# def quick_sort(arr):
#     if len(arr) < 2:
#         return arr
#     p = arr[0]
#     arrf, arrb = divide(arr[1:], p)
#     return quick_sort(arrf) + [p] + quick_sort(arrb)


# def divide(arr, p):
#     left = []
#     right = []
#     for j in arr:
#         if j <= p:
#             left.append(j)
#         else:
#             right.append(j)
#     return left, right

# list =  [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8]
# print(quick_sort(list))

# バケットソート
def bucket_sort(arr):
    arrc = [0] * (max(arr)+1)
    ans = []
    for i in arr:
        arrc[i] += 1
    for j in range(0, len(arrc)):
        ans.extend([j]*arrc[j])
    return ans

list = [17, 11, 11, 5, 14, 9, 6, 19, 4, 10, 1, 19, 13, 5, 0, 2, 13, 18, 7, 8]
print(bucket_sort(list))