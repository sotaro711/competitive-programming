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

buble_sort(org_list)
print(org_list)