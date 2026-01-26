# 選択ソート
# 一番左をソート済みとする
# 未ソート部分から一番小さい値のindexを特定
# ソート済み要素と比較して、要素より小さかったらそこで終了
def select_sort(arr):
    # 最後の列はソートが完了している
    for i in range(0, len(arr)-1):
        exchange(arr, i)
    return arr

def exchange(arr, i):
    min_idx = i
    for j in range(i+1, len(arr)):
        if arr[min_idx] > arr [j]:
            min_idx = j
    # ループの中でこの処理を行なってしまうと、見つかる度に入れ替わってしまう
    # => 新しい値が見つかったら上書きされてしまう
    # [5, 3, 4] => [3, 5, 4] => [4, 5, 3]!??!?
    arr[min_idx], arr[i] = arr[i], arr[min_idx]
       

# org_list = [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8]
# print(select_sort(org_list))

# 挿入ソート
# arr[0]をソート済みとする
# 未ソート済みの最初の要素をtmpに保存
# ソート済み配列を右から見て、tmpよりも大きかったら右に一つ移動
def insert_sort(arr):
    for i in range(1, len(arr)):
        insert(arr, i)
    return arr

def insert(arr, i):
    tmp = arr[i]
    for j in range(i-1, -1, -1):
        if tmp < arr[j]:
            arr[j+1] = arr[j]
        else:
            arr[j+1] = tmp
            # 比較終了を入れないとそれより小さい値も比較してしまい、当然それより小さいので入れ替わってしまう
            # 一番最初に見つけたそれより小さいものでないとあかん
            break
    else:
        arr[0] = tmp

# list = [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8]
# print(insert_sort(list))

# 昇順になるまで以下を繰り返す
# 一番後ろから見て、隣り合う要素が昇順になっていなかったら交換
# def buble_sort(arr):
#     for i in range(0, len(arr)):
#         sort(arr, i)
#     return arr

# def sort(arr, i):
#     for j in range(len(arr)-1, i-1, -1):
#         if arr[j] < arr[j-1]:
#             arr[j], arr[j-1] = arr[j-1], arr[j]

# list = [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8] 
# print(buble_sort(list))

def memo_fib(n):
    memo = [None] * (n+1)

    def _fib(n):
        if n == 0 or n == 1:
            return 1
        if memo[n] != None:
            return memo[n]
        memo[n] = _fib(n-1) + _fib(n-2)
        return memo[n]
    return _fib(n)

# for i in range(35):
#     print(memo_fib(i))

# マージソート
# 二つに分割
# 二つの部分配列をマージソートする
# それぞれをマージする
# def merge_sort(arr):
#     if len(arr) < 2:
#         return arr
#     mid = len(arr) // 2
#     arrf, arrb = arr[:mid], arr[mid:]
#     return merge(merge_sort(arrf), merge_sort(arrb))

# def merge(arrf, arrb):
#     if len(arrf) < 1:
#         return arrb
#     if len(arrb) < 1:
#         return arrf
#     if arrf[0] <= arrb[0]:
#         return [arrf[0]] + merge(arrf[1:], arrb)
#     else:
#         return [arrb[0]] + merge(arrf, arrb[1:])

# クイックソート
# 一番左をpに保存
# 大小関係を比較して、ソート
# def quick_sort(arr):
#     if len(arr) < 2:
#         return arr
#     p = arr[0]
#     arrf, arrb = divide(arr[1:], p)
#     return quick_sort(arrf) + [p] + quick_sort(arrb)

# def divide(arr, p):
#     left = []
#     right = []
#     for i in arr:
#         if p >= i:
#             left.append(i)
#         else:
#             right.append(i)
#     return left, right

# list =  [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8]
# print(quick_sort(list))

#バケットソート
list = [17, 11, 11, 5, 14, 9, 6, 19, 4, 10, 1, 19, 13, 5, 0, 2, 13, 18, 7, 8] 
def bucket_sort(arr):
    arrc = [0] * (max(arr)+1)
    for i in arr:
        arrc[i] += 1
    ans = []
    for j in range(0, len(arr)):
        ans.extend([j]*arrc[j])
    return ans

print(bucket_sort(list))

