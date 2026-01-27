# スタック：後入れ先だし,深さ優先探索
# キュー：先入れ先出し追加：エンキュー、削除：デキュー、幅優先探索
# 二分木の根をスタック（s）にpushする
# Sがからでないならば、以下の処理を繰り返す
# Sがデータを一つポップする

# 二分木の根をスタック（S）にpushする
# Sがからでないなら以下を繰り返す
#   Sからデータを１つpopする
#   popしたデータを出力する
#   popしたデータに左の子があればpushする
#   popしたデータに右の子があればpushする

from collections import deque

# タプル形式で表された二分木
bt = ((((),"A3",()),"A2",((),"B3",())),"A1",(((),"C3",()),"B2",((),"D3",())))

# S = deque()
# for i in range()
# S.append
# while len(S) != 0:

def dfs(t):
    s = deque()
    print("s", s)
    s.append(t)
    print("t in s,", s)
    while len(s) > 0:
        l, p, r = s.pop()
        print(p)
        if len(l) > 0:
            s.append(l)
        if len(r) > 0:
            s.append(r)
    
print("深さ優先探索")
dfs(bt)

def hfs(t):
    s = deque()
    s.append(t)
    while len(s) > 0:
        l, p, r = s.popleft()
        print(p)
        if len(l) > 0:
            s.append(l)
        if len(r) > 0:
            s.append(r)
print("幅優先探索")
hfs(bt)