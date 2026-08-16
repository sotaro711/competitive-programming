# AtCoder C++ 環境の使い方

`acc` (atcoder-cli) + `oj` (online-judge-tools) を使ったコンテスト参加・復習の手順。

## 1. 問題のダウンロード

コンテスト開始後（21:00〜）に `cpp/` ディレクトリで：

```sh
cd ~/competitive-programming/cpp
acc new abc471    # ← コンテスト名（回番号）に変える
```

これで A〜G 全問題が一括で落ちてくる（`default-task-choice all` 設定済みのため、問題選択プロンプトは出ない）：

```
abc471/
├── contest.acc.json
├── a/
│   ├── main.cpp      # テンプレートから自動生成
│   └── tests/        # サンプル入出力
├── b/
└── ...
```

- 過去問の復習も同じコマンドでよい（例: `acc new abc430`）
- コンテスト開始前は問題が非公開なので失敗する。開始後にやり直す
  （中途半端にフォルダができていたら消してから再実行）

## 2. コーディングとテスト

```sh
cd abc471/a
# main.cpp を編集
ojt    # コンパイル + サンプルテスト
```

`ojt` は `.zshrc` に定義済みのエイリアス：

```sh
alias ojt='g++-16 -std=gnu++23 -O2 -Wall -o a.out main.cpp && oj t -d tests -c ./a.out'
```

手元で任意入力を試したいときは `./a.out` を直接実行。

## 3. 提出（ブラウザで手動）

**`acc submit` / `oj submit` は使えない。** AtCoder が2025年4月から提出時に
Cloudflare Turnstile（CAPTCHA）を必須化したため、CLI からの提出は弾かれる
（「× Error.」で失敗する。[Tatamo/atcoder-cli#68](https://github.com/Tatamo/atcoder-cli/issues/68) 参照。修正見込みなし）。

提出はブラウザで行う：

```sh
pbcopy < main.cpp    # コードをコピー
```

提出ページ（`https://atcoder.jp/contests/abc471/submit`）を開いて、
問題と言語（C++23 (GCC)）を選び、⌘V で貼り付けて提出ボタンを押す。
言語は前回の選択が記憶される。

## トラブルシューティング

- **`acc submit` で `AssertionError: assert parsed_memory_limit`**
  AtCoder のメモリ表記が MB → MiB に変わったことによる oj のパースエラー。
  pipx 環境内の `onlinejudge/service/atcoder.py` にローカルパッチ適用済み（2026-08-10）。
  `pipx upgrade online-judge-tools` 等で再インストールするとパッチが消えるので、
  再発したら同様に正規表現へ `KiB|MiB` を追加する。
  （ただしこれを直しても提出は上記 Turnstile で結局失敗する）
- **ログインが切れた場合**
  Cookie 方式で再設定する（ブラウザでログインして `REVEL_SESSION` を oj の
  cookie.jar に反映）。パスワードログインも Turnstile で不可。
