# 一番左をソート済みとみなす
# 次のコードをどこに入れるかを決める
# 整列済み要素に挿入していく

# 先頭の要素をソート済みにする
# 未ソート部分がなくなるまで以下を繰り返す
# 1. 未ソート部分の先頭から要素を取り出してtmpに保存
# 2. ソート部の要素において、tmpより大きい要素を後方へ一つずつ移動する
# 3. 最後に空いた位置にtmpを挿入


def insert_sort(arr):
    for i in range(1, len(arr)):
        insert(arr, i)

def insert(arr, i):
    # 未ソート部分の先頭を一時的な（temporary）変数に代入
    tmp = arr[i] 
    for j in range(i - 1, -1, -1):
        if tmp < arr[j]:
            arr[j + 1] = arr[j]
        else:
            arr[j + 1] = tmp
            break
    else:
        arr[0] = tmp

org_arr = [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8]

insert_sort(org_arr)
print(org_arr)
    

