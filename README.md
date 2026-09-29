# CWorkspace

C 语言学习工作区，存放练习源码与学习笔记。

## 目录结构

| 文件 | 说明 |
| --- | --- |
| `hello.c` | 第一个 C 程序（UTF-8 控制台输出） |
| `Untitled-2.c` | 练习文件 |
| `C语言学习笔记.md` | C 语言 / Markdown 学习笔记 |
| `自我介绍.md` | 自我介绍 |
| `# 这是一个自我介绍.md` | 自我介绍（草稿） |
| `picgo上传测试.md` | PicGo 图床上传说明 |
| `.vscode/` | VS Code 调试与编译任务配置 |

## 编译环境

- 编译器：MinGW-w64 GCC（`C:\mingw64\bin\gcc.exe`）
- 源码编码：UTF-8

### 已配置的 VS Code 任务

| 任务 | 说明 |
| --- | --- |
| `gcc: 编译当前文件（调试版）` | `-g3 -Wall -Wextra`，默认生成任务（`Ctrl+Shift+B`） |
| `gcc: 编译当前文件（发布版 -O2）` | 优化编译 |
| `gcc: 编译并运行当前文件` | 编译后直接运行（默认测试任务） |

编译产物（`*.exe`）已在 `.gitignore` 中忽略，不纳入版本管理。
