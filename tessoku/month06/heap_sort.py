def heap_sort(arr):
    sorted_arr = []
    for _ in range(len(arr)):
        build_min_heap()
        arr[0], arr[-1] = arr[-1], arr[0]
        sorted_arr.append(arr.pop())
    return sorted_arr