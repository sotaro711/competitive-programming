import random
key = random.randint(1, 10)
print(str(key) + "が含まれるかチェック")

#解答①はこの下に記入
org_list =  [1, 2, 5, 8, 10]

def search(arr):
    for i in range(0, len(arr)):
        if key == arr[i]:
            return i
    return None

print(search(org_list))