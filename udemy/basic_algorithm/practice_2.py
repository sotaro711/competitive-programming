# 選択くソート
# 未ソート部分からiより小さい要素を特定
# arr[0]と交換
# org_sort =  [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8]

def select_sort(arr):
    # 最後の要素になったらもうソート済みなのでstopはlen(arr)-1
    for i in range(0, len(arr)-1):
        sort(arr, i)
    
def sort(arr, i):
    min_idx = i
    # 最後まで見る必要があるのでstopはlen(arr)
    for j in range(i+1, len(arr)):
        if arr[j] < arr[min_idx]:
            min_idx = j
    arr[i], arr[min_idx] = arr[min_idx], arr[i]

# print(select_sort(org_sort)) これは戻り値がないのでvoidです

# select_sort(org_sort)
# print(org_sort)

# 挿入ソート
# 初期要素をソート済みとする
# 初期要素と隣の要素（未ソート）を比べてソート済み要素よりも小さかったら押し出す
# 最後に空いた位置にtmpを入れる
org_list =  [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8] 

def insert_sort(arr):
    # ここは最後まで見るよね
    for i in range(1, len(arr)):
        insert(arr, i)

def insert(arr, i):
    tmp = arr[i]
    for j in range(i-1, -1 ,-1):
        if arr[j] > tmp:
            # 後方に一つずつ移動
            arr[j+1] = arr[j]
        else:
            arr[j+1] = tmp
            break
    # どの要素よりも小さい時は一番初めに入れる
    # 上の処理だと勝手に入らない（小さい時はこう、大きい時はこうしか処理がない）
    else:
        arr[0] = tmp
# insert_sort(org_list)
# print(org_list)
            
# バブルソート
# 順番が逆になっている隣接要素がなくなるまで繰り返す
# 配列の末尾から隣接する要素を順番に比べすする要素を順番に比べていき,大小関係が逆ならば交換する
def buble_sort(arr):
    for i in range(0, len(arr)-1):
        exchange(arr, i)

def exchange(arr, i):
    for j in range(len(arr)-1, i, -1):
        if arr[j] < arr[j-1]:
            arr[j-1], arr[j] = arr[j], arr[j-1]

# buble_sort(org_list)
# print(org_list)

# ②
# 再帰関数を使う
# 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 
def fib(n):
    arr = [0] * (n+1)
    arr[0] = 1
    for i in range(0, n):
        arr[i+1] = arr[i] + arr[i-1]
        print(arr[i])
# 再帰関数を使えていない

# 分割統治法
# 与えられた問題を分割
# 再帰的に解く
# 解いた問題をマージ
# # フィボナッチ数列nこうは、n-1こうとn-2こうの足し算
# def _fib(n):
#     if n == 1 or n == 0:
#         return 1
#     return _fib(n-1) + _fib(n-2)

# for i in range(35):
#     print(_fib(i))

# メモかfib
# 動的計画法
# 一度計算した値をmemoに保存
def memo_fib(n):
    memo = [None] * (n+1)

    def _fib(n):
        if n == 0 or n == 1:
            return 1
        if memo[n] != None:
            return memo[n]
        memo[n] = _fib(n-1) + _fib(n-2)
        # print(memo[n])
        return memo[n]
    return _fib(n)

for i in range(35):
    print(memo_fib(i))
# for i in range(35):
#     print(memo_fib(i))

merge_list = [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8] 

# 与えられた配列を二つに分割
# 二つの部分配列をmerge_sortでソート
# 得られた二つのソート済み配列をマージ
def merge_sort(arr):
    mid = len(arr) // 2
    return merge_sort(arr[:])    
