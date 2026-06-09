# Отчет по лабораторной работе №2

## Репозиторий

Ссылка: <https://github.com/n9s6sstd5h-blip/lab02>

Ветка для выполнения задания: `master`.

Pull request'ы, созданные и смерженные при выполнении:

- PR #1: <https://github.com/n9s6sstd5h-blip/lab02/pull/1>
- PR #2: <https://github.com/n9s6sstd5h-blip/lab02/pull/2>

## Подготовка

### Задание

Проверить, что репозиторий публичный, называется `lab02`, а основной веткой является `master`.

Команда:

```bash
gh repo view n9s6sstd5h-blip/lab02 --json name,visibility,defaultBranchRef --jq '{name: .name, visibility: .visibility, defaultBranch: .defaultBranchRef.name}'
```

Вывод:

```text
{"defaultBranch":"master","name":"lab02","visibility":"PUBLIC"}
```

### Задание

Проверить установленную версию Git.

Команда:

```bash
git --version
```

Вывод:

```text
git version 2.50.1 (Apple Git-155)
```

### Задание

Проверить авторизацию GitHub CLI.

Команда:

```bash
gh auth status
```

Вывод:

```text
github.com
  ✓ Logged in to github.com account n9s6sstd5h-blip (keyring)
  - Active account: true
  - Git operations protocol: https
  - Token: gho_************************************
  - Token scopes: 'gist', 'read:org', 'repo', 'workflow'
```

## Tutorial

### Задание

Склонировать пустой репозиторий.

Команда:

```bash
git clone https://github.com/n9s6sstd5h-blip/lab02.git lab02
```

Вывод:

```text
Cloning into 'lab02'...
warning: You appear to have cloned an empty repository.
```

### Задание

Создать рабочую ветку `master`.

Команда:

```bash
git checkout -b master
```

Вывод:

```text
Switched to a new branch 'master'
```

### Задание

Сделать первый коммит с `README.md` и лицензией MIT, затем отправить его в удаленный репозиторий.

Команда:

```bash
git status
```

Вывод:

```text
On branch master

No commits yet

Untracked files:
  (use "git add <file>..." to include in what will be committed)
	LICENSE
	README.md

nothing added to commit but untracked files present (use "git add" to track)
```

Команда:

```bash
git add README.md LICENSE
```

Вывод:

```text

```

Команда:

```bash
git status
```

Вывод:

```text
On branch master

No commits yet

Changes to be committed:
  (use "git rm --cached <file>..." to unstage)
	new file:   LICENSE
	new file:   README.md
```

Команда:

```bash
git commit -m "initial commit"
```

Вывод:

```text
[master (root-commit) c075fd4] initial commit
 2 files changed, 25 insertions(+)
 create mode 100644 LICENSE
 create mode 100644 README.md
```

Команда:

```bash
git push -u origin master
```

Вывод:

```text
To https://github.com/n9s6sstd5h-blip/lab02.git
 * [new branch]      master -> master
branch 'master' set up to track 'origin/master'.
```

### Задание

Добавить `.gitignore`, структуру проекта и исходные файлы из Tutorial.

Команда:

```bash
git status
```

Вывод:

```text
On branch master
Your branch is up to date with 'origin/master'.

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
	modified:   README.md

Untracked files:
  (use "git add <file>..." to include in what will be committed)
	.gitignore
	examples/
	include/
	sources/

no changes added to commit (use "git add" and/or "git commit -a")
```

Команда:

```bash
git add .
```

Вывод:

```text

```

Команда:

```bash
git status
```

Вывод:

```text
On branch master
Your branch is up to date with 'origin/master'.

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
	new file:   .gitignore
	modified:   README.md
	new file:   examples/example1.cpp
	new file:   examples/example2.cpp
	new file:   include/print.hpp
	new file:   sources/print.cpp
```

Команда:

```bash
git commit -m "added sources"
```

Вывод:

```text
[master 305dbe1] added sources
 6 files changed, 48 insertions(+)
 create mode 100644 .gitignore
 create mode 100644 examples/example1.cpp
 create mode 100644 examples/example2.cpp
 create mode 100644 include/print.hpp
 create mode 100644 sources/print.cpp
```

Команда:

```bash
git push origin master
```

Вывод:

```text
To https://github.com/n9s6sstd5h-blip/lab02.git
   c075fd4..305dbe1  master -> master
```

## Homework. Part I

### 1. Задание

Создать пустой репозиторий на сервисе github.com.

Команда:

```bash
gh repo view n9s6sstd5h-blip/lab02 --json name,visibility,url --jq '{name, visibility, url}'
```

Вывод:

```text
{"name":"lab02","url":"https://github.com/n9s6sstd5h-blip/lab02","visibility":"PUBLIC"}
```

### 2. Задание

Выполнить инструкцию по созданию первого коммита на странице созданного репозитория.

Команда:

```bash
git log --oneline --decorate --max-count=1
```

Вывод:

```text
c075fd4 (HEAD -> master, origin/master) initial commit
```

### 3. Задание

Создать файл `hello_world.cpp` в локальной копии репозитория. Реализовать программу Hello world на C++ в плохом стиле кода, например с `using namespace std;`.

Команда:

```bash
cat hello_world.cpp
```

Вывод:

```cpp
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello, World!" << endl;
    return 0;
}
```

### 4. Задание

Добавить файл в локальную копию репозитория.

Команда:

```bash
git add hello_world.cpp
```

Вывод:

```text

```

Команда:

```bash
git status
```

Вывод:

```text
On branch master
Your branch is up to date with 'origin/master'.

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
	new file:   hello_world.cpp
```

### 5. Задание

Закоммитить изменения с осмысленным сообщением.

Команда:

```bash
git commit -m "Add hello world program with bad style"
```

Вывод:

```text
[master 7d3a550] Add hello world program with bad style
 1 file changed, 8 insertions(+)
 create mode 100644 hello_world.cpp
```

### 6. Задание

Изменить исходный код так, чтобы программа через стандартный поток ввода запрашивала имя пользователя, а в стандартный поток вывода печатала `Hello world from @name`.

Команда:

```bash
cat hello_world.cpp
```

Вывод:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello world from " << name << endl;
    return 0;
}
```

Команда:

```bash
printf 'Igor\n' | clang++ -std=c++17 hello_world.cpp -o /tmp/hello_world_part1 && printf 'Igor\n' | /tmp/hello_world_part1
```

Вывод:

```text
Enter your name: Hello world from Igor
```

### 7. Задание

Закоммитить новую версию программы. Почему не надо добавлять файл повторно `git add`?

Команда:

```bash
git status
```

Вывод:

```text
On branch master
Your branch is ahead of 'origin/master' by 1 commit.
  (use "git push" to publish your local commits)

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
	modified:   hello_world.cpp

no changes added to commit (use "git add" and/or "git commit -a")
```

Команда:

```bash
git commit -am "Add user input to hello world program"
```

Вывод:

```text
[master 558b2fb] Add user input to hello world program
 1 file changed, 5 insertions(+), 1 deletion(-)
```

Ответ: повторно выполнять `git add hello_world.cpp` не обязательно, потому что файл уже отслеживается Git после первого добавления. Ключ `-a` у `git commit -am` автоматически добавляет в индекс изменения уже отслеживаемых файлов.

### 8. Задание

Запушить изменения в удаленный репозиторий.

Команда:

```bash
git push origin master
```

Вывод:

```text
To https://github.com/n9s6sstd5h-blip/lab02.git
   305dbe1..558b2fb  master -> master
```

### 9. Задание

Проверить, что история коммитов доступна в удаленном репозитории.

Команда:

```bash
git log --oneline --decorate -5
```

Вывод:

```text
558b2fb (HEAD -> master, origin/master) Add user input to hello world program
7d3a550 Add hello world program with bad style
305dbe1 added sources
c075fd4 initial commit
```

## Homework. Part II

### 1. Задание

В локальной копии репозитория создать локальную ветку `patch1`.

Команда:

```bash
git checkout -b patch1
```

Вывод:

```text
Switched to a new branch 'patch1'
```

Команда:

```bash
git branch
```

Вывод:

```text
  master
* patch1
```

### 2. Задание

Внести изменения в ветке `patch1` по исправлению кода и избавлению от `using namespace std;`.

Команда:

```bash
cat hello_world.cpp
```

Вывод:

```cpp
#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello world from " << name << std::endl;
    return 0;
}
```

### 3. Задание

Commit и push локальной ветки в удаленный репозиторий.

Команда:

```bash
git commit -am "Remove using namespace std"
```

Вывод:

```text
[patch1 ab5cf79] Remove using namespace std
 1 file changed, 4 insertions(+), 5 deletions(-)
```

Команда:

```bash
git push -u origin patch1
```

Вывод:

```text
remote: 
remote: Create a pull request for 'patch1' on GitHub by visiting:        
remote:      https://github.com/n9s6sstd5h-blip/lab02/pull/new/patch1        
remote: 
To https://github.com/n9s6sstd5h-blip/lab02.git
 * [new branch]      patch1 -> patch1
branch 'patch1' set up to track 'origin/patch1'.
```

### 4. Задание

Проверить, что ветка `patch1` доступна в удаленном репозитории.

Команда:

```bash
git ls-remote --heads origin patch1
```

Вывод:

```text
ab5cf79126a42f40f6ebc435b3d8e156f7be4e16	refs/heads/patch1
```

### 5. Задание

Создать pull request `patch1 -> master`.

Команда:

```bash
gh pr create --base master --head patch1 --title "Patch1: remove using namespace std" --body "Fix hello_world.cpp style by replacing using namespace std with explicit std:: qualifiers."
```

Вывод:

```text
https://github.com/n9s6sstd5h-blip/lab02/pull/1
```

Команда:

```bash
gh pr view patch1 --json number,title,state,baseRefName,headRefName,mergeable,url --jq '{number, title, state, base: .baseRefName, head: .headRefName, mergeable, url}'
```

Вывод:

```text
{"base":"master","head":"patch1","mergeable":"UNKNOWN","number":1,"state":"OPEN","title":"Patch1: remove using namespace std","url":"https://github.com/n9s6sstd5h-blip/lab02/pull/1"}
```

### 6. Задание

В локальной копии в ветке `patch1` добавить в исходный код комментарии.

Команда:

```bash
cat hello_world.cpp
```

Вывод:

```cpp
#include <iostream>
#include <string>

int main()
{
    // Store the user name read from standard input.
    std::string name;

    // Ask for a name and print a personalized greeting.
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello world from " << name << std::endl;
    return 0;
}
```

### 7. Задание

Commit и push.

Команда:

```bash
git commit -am "Add comments to hello world"
```

Вывод:

```text
[patch1 48bef8b] Add comments to hello world
 1 file changed, 3 insertions(+)
```

Команда:

```bash
git push origin patch1
```

Вывод:

```text
To https://github.com/n9s6sstd5h-blip/lab02.git
   ab5cf79..48bef8b  patch1 -> patch1
```

### 8. Задание

Проверить, что новые изменения есть в созданном на шаге 5 pull request.

Команда:

```bash
gh pr view 1 --json number,state,commits,files --jq '{number, state, commits: [.commits[].messageHeadline], files: [.files[].path]}'
```

Вывод:

```text
{"commits":["Remove using namespace std","Add comments to hello world"],"files":["hello_world.cpp"],"number":1,"state":"OPEN"}
```

### 9. Задание

В удаленном репозитории выполнить слияние PR `patch1 -> master` и удалить ветку `patch1` в удаленном репозитории.

Команда:

```bash
gh pr merge 1 --merge --delete-branch
```

Вывод:

```text

```

Команда:

```bash
gh pr view 1 --json number,state,mergedAt,baseRefName,headRefName,url --jq '{number, state, mergedAt, base: .baseRefName, head: .headRefName, url}'
```

Вывод:

```text
{"base":"master","head":"patch1","mergedAt":"2026-06-09T21:18:26Z","number":1,"state":"MERGED","url":"https://github.com/n9s6sstd5h-blip/lab02/pull/1"}
```

Команда:

```bash
git ls-remote --heads origin patch1
```

Вывод:

```text

```

### 10. Задание

Локально выполнить pull.

Команда:

```bash
git checkout master
```

Вывод:

```text
Already on 'master'
Your branch is up to date with 'origin/master'.
```

Команда:

```bash
git pull origin master
```

Вывод:

```text
From https://github.com/n9s6sstd5h-blip/lab02
 * branch            master     -> FETCH_HEAD
Already up to date.
```

### 11. Задание

С помощью `git log` просмотреть историю в локальной версии ветки `master`.

Команда:

```bash
git log --oneline --graph --decorate -8
```

Вывод:

```text
*   44c012a (HEAD -> master, origin/master) Merge pull request #1 from n9s6sstd5h-blip/patch1
|\  
| * 48bef8b Add comments to hello world
| * ab5cf79 Remove using namespace std
|/  
* 558b2fb Add user input to hello world program
* 7d3a550 Add hello world program with bad style
* 305dbe1 added sources
* c075fd4 initial commit
```

### 12. Задание

Удалить локальную ветку `patch1`.

Команда:

```bash
git branch -a
```

Вывод:

```text
* master
  remotes/origin/HEAD -> origin/master
  remotes/origin/master
```

Комментарий: локальная ветка `patch1` отсутствует, удаленная ветка также удалена; это подтверждено выводом `git branch -a` и пустым выводом `git ls-remote --heads origin patch1`.

## Homework. Part III

### 1. Задание

Создать новую локальную ветку `patch2`.

Команда:

```bash
git checkout -b patch2
```

Вывод:

```text
Switched to a new branch 'patch2'
```

Команда:

```bash
git branch
```

Вывод:

```text
  master
* patch2
```

### 2. Задание

Изменить code style с помощью `clang-format`, используя стиль Mozilla.

Команда:

```bash
xcrun clang-format --version
```

Вывод:

```text
Apple clang-format version 21.0.0 (clang-2100.1.1.101)
```

Команда:

```bash
xcrun clang-format -style=Mozilla -i hello_world.cpp
```

Вывод:

```text

```

Команда:

```bash
cat hello_world.cpp
```

Вывод:

```cpp
#include <iostream>
#include <string>

int
main()
{
  // Store the user name read from standard input.
  std::string name;

  // Ask for a name and print a personalized greeting.
  std::cout << "Enter your name: ";
  std::cin >> name;
  std::cout << "Hello world from " << name << std::endl;
  return 0;
}
```

### 3. Задание

Commit, push, создать pull request `patch2 -> master`.

Команда:

```bash
git commit -am "Apply Mozilla code style"
```

Вывод:

```text
[patch2 c5dd7c5] Apply Mozilla code style
 1 file changed, 9 insertions(+), 8 deletions(-)
```

Команда:

```bash
git push -u origin patch2
```

Вывод:

```text
remote: 
remote: Create a pull request for 'patch2' on GitHub by visiting:        
remote:      https://github.com/n9s6sstd5h-blip/lab02/pull/new/patch2        
remote: 
To https://github.com/n9s6sstd5h-blip/lab02.git
 * [new branch]      patch2 -> patch2
branch 'patch2' set up to track 'origin/patch2'.
```

Команда:

```bash
gh pr create --base master --head patch2 --title "Patch2: apply Mozilla code style" --body "Format hello_world.cpp with clang-format using Mozilla style."
```

Вывод:

```text
https://github.com/n9s6sstd5h-blip/lab02/pull/2
```

Команда:

```bash
gh pr view patch2 --json number,state,baseRefName,headRefName,mergeable,url --jq '{number, state, base: .baseRefName, head: .headRefName, mergeable, url}'
```

Вывод:

```text
{"base":"master","head":"patch2","mergeable":"UNKNOWN","number":2,"state":"OPEN","url":"https://github.com/n9s6sstd5h-blip/lab02/pull/2"}
```

### 4. Задание

В ветке `master` в удаленном репозитории изменить комментарии.

Команда:

```bash
git checkout master
```

Вывод:

```text
Switched to branch 'master'
Your branch is up to date with 'origin/master'.
```

Команда:

```bash
cat hello_world.cpp
```

Вывод:

```cpp
#include <iostream>
#include <string>

int main()
{
    // Переменная для хранения имени пользователя.
    std::string name;

    // Запрашиваем имя и печатаем персональное приветствие.
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello world from " << name << std::endl;
    return 0;
}
```

Команда:

```bash
git commit -am "Translate comments to Russian"
```

Вывод:

```text
[master 99a224c] Translate comments to Russian
 1 file changed, 2 insertions(+), 2 deletions(-)
```

Команда:

```bash
git push origin master
```

Вывод:

```text
To https://github.com/n9s6sstd5h-blip/lab02.git
   44c012a..99a224c  master -> master
```

### 5. Задание

Убедиться, что в pull request появились конфликты.

Команда:

```bash
gh pr view 2 --json number,state,mergeable,reviewDecision,url --jq '{number, state, mergeable, reviewDecision, url}'
```

Вывод:

```text
{"mergeable":"CONFLICTING","number":2,"reviewDecision":"","state":"OPEN","url":"https://github.com/n9s6sstd5h-blip/lab02/pull/2"}
```

### 6. Задание

Локально выполнить pull + rebase и исправить конфликты.

Команда:

```bash
git checkout patch2
```

Вывод:

```text
Switched to branch 'patch2'
Your branch is up to date with 'origin/patch2'.
```

Команда:

```bash
git pull --rebase origin master
```

Вывод:

```text
From https://github.com/n9s6sstd5h-blip/lab02
 * branch            master     -> FETCH_HEAD
Rebasing (1/1)
Auto-merging hello_world.cpp
CONFLICT (content): Merge conflict in hello_world.cpp
error: could not apply c5dd7c5... Apply Mozilla code style
hint: Resolve all conflicts manually, mark them as resolved with
hint: "git add/rm <conflicted_files>", then run "git rebase --continue".
hint: You can instead skip this commit: run "git rebase --skip".
hint: To abort and get back to the state before "git rebase", run "git rebase --abort".
hint: Disable this message with "git config set advice.mergeConflict false"
Could not apply c5dd7c5... # Apply Mozilla code style
```

Команда:

```bash
git status
```

Вывод:

```text
interactive rebase in progress; onto 99a224c
Last command done (1 command done):
   pick c5dd7c5 # Apply Mozilla code style
No commands remaining.
You are currently rebasing branch 'patch2' on '99a224c'.
  (fix conflicts and then run "git rebase --continue")
  (use "git rebase --skip" to skip this patch)
  (use "git rebase --abort" to check out the original branch)

Unmerged paths:
  (use "git restore --staged <file>..." to unstage)
  (use "git add <file>..." to mark resolution)
	both modified:   hello_world.cpp

no changes added to commit (use "git add" and/or "git commit -a")
```

Команда:

```bash
cat hello_world.cpp
```

Вывод:

```cpp
#include <iostream>
#include <string>

int
main()
{
<<<<<<< HEAD
    // Переменная для хранения имени пользователя.
    std::string name;

    // Запрашиваем имя и печатаем персональное приветствие.
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello world from " << name << std::endl;
    return 0;
=======
  // Store the user name read from standard input.
  std::string name;

  // Ask for a name and print a personalized greeting.
  std::cout << "Enter your name: ";
  std::cin >> name;
  std::cout << "Hello world from " << name << std::endl;
  return 0;
>>>>>>> c5dd7c5 (Apply Mozilla code style)
}
```

Команда:

```bash
cat hello_world.cpp
```

Вывод после исправления конфликта:

```cpp
#include <iostream>
#include <string>

int
main()
{
  // Переменная для хранения имени пользователя.
  std::string name;

  // Запрашиваем имя и печатаем персональное приветствие.
  std::cout << "Enter your name: ";
  std::cin >> name;
  std::cout << "Hello world from " << name << std::endl;
  return 0;
}
```

Команда:

```bash
git add hello_world.cpp
```

Вывод:

```text

```

Команда:

```bash
GIT_EDITOR=true git rebase --continue
```

Вывод:

```text
[detached HEAD 2ecaf0f] Apply Mozilla code style
 1 file changed, 9 insertions(+), 8 deletions(-)
Successfully rebased and updated refs/heads/patch2.
```

### 7. Задание

Сделать force push в ветку `patch2`.

Команда:

```bash
git push --force-with-lease origin patch2
```

Вывод:

```text
To https://github.com/n9s6sstd5h-blip/lab02.git
 + c5dd7c5...2ecaf0f patch2 -> patch2 (forced update)
```

### 8. Задание

Убедиться, что в pull request пропали конфликты.

Команда:

```bash
gh pr view 2 --json number,state,mergeable,url --jq '{number, state, mergeable, url}'
```

Вывод:

```text
{"mergeable":"MERGEABLE","number":2,"state":"OPEN","url":"https://github.com/n9s6sstd5h-blip/lab02/pull/2"}
```

### 9. Задание

Вмержить pull request `patch2 -> master`.

Команда:

```bash
gh pr merge 2 --merge --delete-branch
```

Вывод:

```text

```

Команда:

```bash
git checkout master
```

Вывод:

```text
Already on 'master'
Your branch is up to date with 'origin/master'.
```

Команда:

```bash
git pull origin master
```

Вывод:

```text
From https://github.com/n9s6sstd5h-blip/lab02
 * branch            master     -> FETCH_HEAD
Already up to date.
```

Команда:

```bash
git fetch --prune
```

Вывод:

```text
From https://github.com/n9s6sstd5h-blip/lab02
 - [deleted]         (none)     -> origin/patch2
```

Команда:

```bash
git log --oneline --graph --decorate --all
```

Вывод:

```text
*   9fdc1e0 (HEAD -> master, origin/master, origin/HEAD) Merge pull request #2 from n9s6sstd5h-blip/patch2
|\  
| * 2ecaf0f Apply Mozilla code style
|/  
* 99a224c Translate comments to Russian
*   44c012a Merge pull request #1 from n9s6sstd5h-blip/patch1
|\  
| * 48bef8b Add comments to hello world
| * ab5cf79 Remove using namespace std
|/  
* 558b2fb Add user input to hello world program
* 7d3a550 Add hello world program with bad style
* 305dbe1 added sources
* c075fd4 initial commit
```

## Финальная проверка

### Задание

Проверить финальную программу.

Команда:

```bash
printf 'Igor\n' | clang++ -std=c++17 hello_world.cpp -o /tmp/hello_world_final && printf 'Igor\n' | /tmp/hello_world_final
```

Вывод:

```text
Enter your name: Hello world from Igor
```

Команда:

```bash
git branch -a
```

Вывод:

```text
* master
  remotes/origin/HEAD -> origin/master
  remotes/origin/master
```
