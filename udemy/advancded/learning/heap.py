# ヒープ条件
# maxヒープ条件：節点の値がその親の値以下である
# minヒープ条件：節点の値がその親の値以上である
# 完全二分木は配列で表すことができる

# minヒープの構築
# 子を持つ節点全てに以下の処理をボトムアップに行う
# min_heapifyによって、節点を左右の子と比較してmin-ヒープが成り立っているか確認する
#   成り立っていないなら
#       子の最小値と親を交換する
#       交換後は最小値があった節点においてmin_heapifyを再起的に行う
# 子を持つ節点は要素数の半分までの位置の節点
# 親の節点の位置をiとすると、子の節点の位置は[i*2+1]と[i*2+2]になる

def build_min_heap(arr):
    for i in reversed(range(len(arr) // 2)):
        min_heapify(arr, i)
    return arr

def min_heapify(arr, i):
    left = 2 * i + 1
    right = 2 * i + 2
    length = len(arr) - 1
    smallest = i
    # 最小値の位置の特定
    if left <= length and arr[i] > arr[left]:
        smallest = left
    if right <= length and arr[i] > arr[right]:
        smallest = right
    # minヒープが成立していない時、親子を交換して再帰的にminホープを構築
    if smallest != i:
        arr[i], arr[smallest] = arr[smallest], arr[i]
        min_heapify(arr, smallest)

# print(build_min_heap(list))

# ヒープソート
# minヒープの構築によって最小値を配列の先頭に移動する
# 先頭の要素を除いた配列に対して、この処理を繰り返す
def heap_soat(arr):
    sorted_arr = []
    for _ in range(len(arr)):
        build_min_heap(arr)
        # popするために最小値と末尾を交換
        arr[0], arr[-1] = arr[-1], arr[0]
        sorted_arr.append(arr.pop())
    
    return sorted_arr

list = [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8]
print(heap_soat(list))

