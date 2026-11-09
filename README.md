# github-playground

我的第一个 GitHub 仓库 —— 拿来把 git 那套动作练一遍用的。

## 这是个什么

一个二十行的猜数字小游戏。代码本身不重要，重要的是这个文件夹现在是一个**能推上去的仓库**长什么样。

## 怎么跑

用 g++ 直接编：

```bash
g++ guess.cpp -o guess
./guess
```

## 我在这条练习里干过的事

- [x] 本地建仓库（`git init`）
- [x] 第一次提交（`git add` + `git commit`）
- [x] 推到 GitHub（`git remote add` + `git push`）
- [ ] 在网页上直接改一次 README，然后 `git pull` 拉回本地
- [ ] 开一个分支，改点东西，再合回 main
- [ ] 给别人的项目提一次 Pull Request

## 备忘：日常就这五个动作

| 想干嘛 | 命令 |
| --- | --- |
| 拿别人的项目 | `git clone <地址>` |
| 看自己改了啥 | `git status` / `git diff` |
| 存一版 | `git add -A` && `git commit -m "说明"` |
| 传上去 | `git push` |
| 拿新的 | `git pull` |
第一次
