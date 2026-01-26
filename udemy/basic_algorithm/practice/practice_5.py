# 選択ソート
# 一番左をソート済みとする
# 未ソート部分から一番小さい値のindexを特定
# ソート済み要素と比較して、要素より小さかったらそこで終了
def sort(arr):
    for i in range(0, len(arr)):
        exchange(arr, i)

def exchange(arr, i):
    min_idx = arr[i]
    for j in range(i+1, len(arr)):
        