def merge_sort(arr):
    # 切り捨て、indexは0start
    if len(arr) < 2:
        return arr
    # //は切り捨て
    mid = len(arr) // 2
    left = arr[:mid]
    right = arr[mid:]
    return merge(merge_sort(left), merge_sort(right))

def merge(l, r):
    if len(l) < 1:
        return r
    if len(r) < 1:
        return l
    if l[0] <= r[0]:
        return [l[0]] + merge(l[1:], r)
    if l[0] > r[0]:
        return [r[0]] + merge(l, r[1:])


org_list = [17, 11, 12, 5, 14, 9, 6, 16, 4, 10, 1, 19, 13, 15, 0, 2, 3, 18, 7, 8]
print(merge_sort(org_list))
print(org_list)

# 要素を一個になるまで分解
# 8個の要素があったとすると、3回分割する
# log2(N) 回分割する
# 分割しただけn回マージがいる
# O(nlogn