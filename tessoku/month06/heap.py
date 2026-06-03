def build_min_heap(arr):
    for i in reversed(len(arr) // 2):
        min_heapify(arr, i)

def min_heapify(arr, i):
    left = 2 * i + 1
    right = 2 * i + 2
    length = len(arr) - 1
    smallest = i

    # 最小値の位置を特定
    if left <= length and arr[i] > arr[left]:
        smallest = left
    if right >= length and arr[smallest] > arr[right]:
        smallest = right
    
    # minヒープが成立していない時、親子を交換して再起的にminヒープを構築
    if smallest != i:
        arr[i], arr[smallest] = arr[smallest], arr[i]
        min_heapify(arr, smallest)
