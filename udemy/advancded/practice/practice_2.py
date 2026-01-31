# import random
# key = random.randint(1, 10)
# print(str(key) + "が含まれるかチェック")

# 二分探索
# 昇順にソート済みの配列のみ使える
# left < right の間まで、keyを探す
# def binary_search(arr):
#     left = 0
#     right = len(arr)
#     while left < right:
#         mid = (left + right) // 2
#         if arr[mid] == key:
#             return   mid
#         elif key < arr[mid]:
#             right = mid
#         else:
#             # arr = [1, 2]の時、無限ループしてしまう
#             left = mid + 1
#     return None

# list =  [1, 2, 5, 8, 10]
# print(binary_search(list))

class Node:
  def __init__(self, value):
    self.value = value
    self.left = None
    self.right = None

#解答はこの下に記入

class BinarySearchTree:
    # 木の巡回
    # 左部分木、根、右部分木の順に節点を巡回して出力
    # 再起的なアルゴリズム
    # インスタンス.insert(5)にすると、二分探索木に5が代入される
    # まずは根を作るコンストラクタを定義
    def __init__(self, root):
       self.root = Node(root)

    # データを挿入できるまで以下を繰り返す
    #   挿入するべき範囲に接点がある場合
    #       接点と挿入するべきデータを比較する
    #           小さかったら挿入するべき範囲を左へ
    #           大きかったら右へ挿入するべき範囲を右へ
    #   挿入するべき範囲に接点がない場合
    #       挿入したいデータの値を持つ節点を新たに作って終了
    def insert(self, key):
        node = self.root
        while True:
           if node.value > key:
                if node.left is None:
                    node.left = Node(key)
                    return
                node = node.left
           elif node.value <= key:
                if node.right is None:
                    node.right = Node(key)
                    return
                node = node.right
    
    # 中間順巡回
    # 再起的な処理
    # 左の部分木中間順巡回
    # 根を出力
    # 右の部分木を中間順巡回
    def inorder(self, node):
        if node is None:
            return
        else:
            self.inorder(node.left)
            print(node.value)
            self.inorder(node.right)
    
    # インスタンス.search(5)
    # 5が二分探索木に含まれていたらyes, 含まれない場合はno
    # データを探索できるまで
    def search(self, )

t = BinarySearchTree(7)
t.insert(3)
t.insert(9)
t.insert(1)
t.insert(5)
t.inorder(t.root)