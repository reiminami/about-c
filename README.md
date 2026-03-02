# about-c

*C17

## 目次

1. [Hello World](#hello-world)
1. [ディレクティブ](#ディレクティブ)
1. [変数と定数](#変数と定数)
1. [データ型](#データ型)
1. [条件分岐](#条件分岐)
1. [ループ](#ループ)
1. [配列](#配列)
1. [多次元配列](#多次元配列)
1. [静的](#静的)
1. [構造体](#構造体)
1. [関数](#関数)
1. [関数の引数の参照渡し](#関数の引数の参照渡し)
1. [ポインタ](#ポインタ)
1. [動的割り当て](#動的割り当て)
1. [配列とポインタ](#配列とポインタ)
1. [stdio.h (入出力)](#)
1. [ctype.h (文字操作)](#)
1. [math.h (数学)](#mathh-数学)
1. [stdlib.h (ユーティリティ)](#stdlibh-ユーティリティ)
1. [string.h (文字列操作)](#stringh-文字列操作)
1. [time.h (時間)](#timeh-時間)

## Hello World

- コードを用意します。`stdio.h`をインクルードすることで出力が可能になります。

```c:4
#include <stdio.h>

int main() {
    printf("Hello, World\n");
    return 0;
}
```

- ターミナル等でコンパイル＆実行を行います。

```sh
$ gcc sample.c -o sample
$ ./sample
Hello, World
```

[⬆︎目次に戻る](#目次)

## ディレクティブ

- `include`で標準ライブラリのインクルードやヘッダファイルのインクルードができます。

```c
#include <stdio.h>
#include "sample.h" // ヘッダファイルについてはここでは省略

int main() {
    printf("Hello");
}
```

- `define`を使用することで、定数やマクロの宣言が可能です。

```c
#include <stdio.h>

#define NEWLINE '\n'
#define SUM(a, b) ((a) + (b))

int main() {
    printf("Hello, World%c", NEWLINE);
    printf("%d\n", SUM(10, 20));
}
```

> 以降、「インクルード」と「main関数」の記載は省略します。

[⬆︎目次に戻る](#目次)

## 変数と定数

- 整数型(int)の変数に値を代入できます。

```c
int age = 20;
printf("%d歳\n", age);              // 20歳
```

- 定数も使用できます。

```c
const int MAX_HP = 9999;
int hp = 2300;
printf("HP: %d/%d", hp, MAX_HP);    // HP: 2300/9999
```

[⬆︎目次に戻る](#目次)

## データ型

- [データ型一覧](/datatypes.md)を参照ください。
- boolは標準ライブラリ `stdbool.h` をインクルードすることで使用できます。

```c
#include <stdbool.h>

...
bool is_enable = true;
```

- C言語での文字列は「文字の配列」になります。

```c
char *name = "Thom Yorke";
```

- 読み取り専用の文字列の定義も可能です。

```c
char name[] = "Ringo Starr";
name = "Ringo Starrrrrr";    // エラー
```

[⬆︎目次に戻る](#目次)

## 条件分岐

- if文が使えます。

```c
if (age == 20) {
    printf("ギリ買える");
} else if (age > 20) {
    printf("買える");
} else {
    printf("買えない");
}
```

- switch文も使えます。

```c
int gender = 2;
switch (gender) {
case 0:
    printf("男");
    break;
case 1:
    printf("女");
    break;
default:
    printf("...");
    break;
}
```

[⬆︎目次に戻る](#目次)

## ループ

- forループが使えます。

```c
for (int i=0; i<3; i++) {
    printf("%d\n", i);
}
```

- whileループも使えます。

```c
int i = 0;
while (i < 3) {
    i++;
    printf("%d\n", i);
}
```

- do-whileループも使えます。

```c
int i = 0;
do {
    i++;
    printf("%d\n", i);
} while (i < 3);
```

[⬆︎目次に戻る](#目次)

## 配列

- 1つの変数名で複数の値を保持できます。

```c
int score[3];
score[0] = 100;
score[1] = 80;
score[2] = 95;
```

- 宣言は簡略化できます。

```c
int score[3] = {100, 80, 95};
```

- 下記コードで要素数を取得できます。

```c
int n = sizeof(score) / sizeof(score[0]);
```

[⬆︎目次に戻る](#目次)

## 多次元配列

- 配列の多次元版です。

```c
int results[2][5] = {
    {90, 97, 86, 95, 99},
    {58, 60, 66, 87, 62}
};
```

- 行数の指定は不要です。

```c
int results[][5] = {
    {90, 97, 86, 95, 99},
    {58, 60, 66, 87, 62},
    {0, 21, 30, 84, 30}
};
```

- 下記コードで行数や列数を取得できます。

```c
int rows = sizeof(results) / sizeof(results[0]);
int cols = sizeof(results[0]) / sizeof(results[0][0]);
```

[⬆︎目次に戻る](#目次)

## 静的

- 静的変数は、ファイルのどこからでもアクセスできます。

```c
int plus() {
    static int count = 0;
    count++;
    return count;
}

int main() {
    printf("%d\n", plus()); // 1
    printf("%d\n", plus()); // 2
}
```

- 静的関数も使えます。

```c
static int get_one() {
    return 1;
}
```

[⬆︎目次に戻る](#目次)

## 構造体

- クラスとオブジェクトの基盤となる複合データ型です。

```c
struct Person {
    char *name;
    int age;
};

int main() {
    struct Person p;
    p.name = "John";
    p.age = 20;
}
```

- 複数の構造体データも扱うことができます。

```c
// 上記のstruct Person {...は残したまま

typedef struct Person person_data;

int main() {
    person_data data[] = {
        {"John", 20},
        {"Paul", 19},
    };
}
```

[⬆︎目次に戻る](#目次)

## 関数

- 関数が使用できます。

```c
int sum(int a, int b) {
    return a + b;
}

int main() {
    int x = sum(5, 2);
}
```

- ファイルの先頭やヘッダファイルでの実装も可能です。（呼び出す前に関数が定義されていない場合エラーになります。）

```c
int sum(int a, int b);

int main() {
    int x = sum(5, 2);
    printf("%d\n", x);
}

int sum(int a, int b) {
    return a + b;
}
```

[⬆︎目次に戻る](#目次)

## 関数の引数の参照渡し

- 関数の引数は「値渡し」で、関数間で値をコピーして渡します。
- ポインタを使用して、「参照渡し」することも可能です。

```c
void plus_one(int *num) {
    (*num)++;
}

int main() {
    int number = 10;    // number: 10
    plus_one(&number);  // number: 11
}
```

- 構造体へのポインタも可能です。この場合は簡略化できます。

```c
struct Point {
    int x;
    int y;
};

void move(struct Point *p) {
    p->x++;
    p->y++;
}

int main() {
    struct Point p;
    p.x = 10;
    p.y = 5;
    move(&p);       // x:11, y:6
}
```

[⬆︎目次に戻る](#目次)

## ポインタ

- 値そのものではなく、値を指すメモリアドレスを保持する整数の変数です。

```c
int age = 20;
int *p_age = &age;
printf("%d\n", *p_age);
```

- 下記コードはポインタに対する操作の例です。

```c
age++;          // 21
age += 1;       // 22
(*p_age)++;     // 23
(*p_age) += 1;  // 24
```

[⬆︎目次に戻る](#目次)

## 動的割り当て

- リンクリストの複雑なデータ構築等、プログラム作成時にデータサイズを把握する必要がなくなります。

```c
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char *name;
    int age;
} Person;

int main() {
    Person *person = (Person *) malloc(sizeof(Person));
    person->name = "John";
    person->age = 22;
}
```

- `free` でメモリの解放を忘れずに。

```c
free(person);
```

[⬆︎目次に戻る](#目次)

## 配列とポインタ

- 配列にもポインタが使用できます。

```c
int n = 4;
char *alphabets = (char*) malloc(n * sizeof(char));

alphabets[0] = 'a';
alphabets[1] = 'b';
*(alphabets + 2) = 'c';
alphabets[3] = 'd';

free(alphabets);
```

[⬆︎目次に戻る](#目次)

## stdio.h (入出力)

- printf - 文字列を出力する
- [fopen](/stdio/fopen.c) - ファイルを作成
- fclose - ファイルを閉じる（[fclose.c](/stdio/fopen.c)参照）
- [fgetc](/stdio/fgetc.c) - ファイルから文字を読み取る
- [fgets](/stdio/fgets.c) - ファイルから1行を読み取る
- [fprintf](/stdio/fprintf.c) - ファイルに書き込む
- [fputc](/stdio/fputc.c) - ファイルに文字を書き込む
- [fputs](/stdio/fputs.c) - ファイルに文字列を書き込む
- [fread](/stdio/fread.c) - ファイルからデータを読み取る
- [fscanf](/stdio/fscanf.c) - ファイルから文字列を読み取る
- [fseek](/stdio/fseek.c) - ファイルから特定の位置の文字を読み取る
- [ftell](/stdio/ftell.c) - ファイルの現在の位置を返す
- [fwrite](/stdio/fwrite.c) - ファイルにコンテンツを書き込む
- [rename](/stdio/rename.c) - ファイル名を変更する
- [remove](/stdio/remove.c) - ファイルを削除する
- [rewind](/stdio/rewind.c) - 位置インジケータをファイルの先頭に移動する
- getc - [fgetc](/stdio/fgetc.c) と同じ
- [getchar](/stdio.getchar.c) - ユーザー入力の文字を読み取る
- putc - [fputc](/stdio/fputc.c) と同じ
- [putchar](/stdio/putchar.c) - コンソールに文字を書き込む
- [puts](/stdio/puts.c) - コンソールに文字列を書き込む
- [scanf](/stdio/scanf.c) - ユーザー入力の文字を読み取る
- [sscanf](/stdio/sscanf.c) - 文字列から数値を抽出する
- [sprintf](/stdio/sprintf.c) - フォーマットされた文字列をchar配列に書き込む
- [snprintf](/stdio/snprintf.c) - フォーマットされた文字列をchar配列に書き込む

[⬆︎目次に戻る](#目次)

## ctype.h (文字操作)

以下は全て文字(char)に対する関数です。

- [isalnum](/ctype/isalnum.c) - 英数字か確認する
- isalpha - 文字か確認する
- isblank - スペースまたはタブか確認する
- iscntrl - 制御文字（`\n`, `\t`, `\b`等）か確認する
- isdigit - 数字か確認する
- isgraph - グラフィカルな表現（`!`, `"`, `#`, `$`, `%`, `&`, `'`, `(`, `)`, `*`等）か確認する
- islower - 小文字か確認する
- isprint - 印刷可能か確認する
- ispunct - 区切り文字か確認する（ロケールにより判定は変化）
- isspace - 空白（スペース、タブ、改行等）か確認する
- isupper - 大文字か確認する
- isxdigit - 16進数か確認する
- tolower - 小文字に変換する
- toupper - 大文字に変換する

[⬆︎目次に戻る](#目次)

## math.h (数学)

- [ceil](/math/ceil.c) - 最も近い整数への切り上げ
- [fabs](/math/fabs.c) - 絶対値を返す
- [floor](/math/floor.c) - 最も近い整数への切り捨て
- [fmax](/math/fmax.c) - 最大値を返す
- fmin - 最小値を返す（[fmax.c](/math/fmax.c)参照）
- [fmod](/math/fmod.c) - 余りを返す
- [hypot](/math/hypot.c) - 原点(0, 0)からの2dポイント(x, y)の距離を返す
- [pow](/math/pow.c) - べき乗を返す
- [remainder](/math/remainder.c) - 剰余を返す
- [round](/math/round.c) - 最も近い整数へ丸める
- [trunc](/math/trunc.c) - 整数部分を返す

[⬆︎目次に戻る](#目次)

## stdlib.h (ユーティリティ)

- 計算
    - [abs](/stdlib/abs.c) - 絶対値を返す
    - [div](/stdlib/div.c) - 除算した結果の商と余りを返す
- メモリ
    - free - メモリを解放する（[calloc](/stdlib/calloc.c), [malloc](/stdlib/malloc.c), [realloc](/stdlib/realloc.c)参照）
    - [calloc](/stdlib/calloc.c) - メモリを割り当てて値を書き込む (0埋め)
    - [malloc](/stdlib/malloc.c) - メモリを割り当てる
    - [realloc](/stdlib/realloc.c) - 新しくメモリを割り当てる
- 乱数
    - [rand](/stdlib/rand.c) - 乱数を返す
    - srand - rand()のシードを設定する（[rand.c](/stdlib/rand.c)参照）
- その他
    - [qsort](/stdlib/qsort.c) - 配列の要素を最小〜最大の順に並べる

[⬆︎目次に戻る](#目次)

## string.h (文字列操作)

- メモリ関連
    - [memchr](/string/memchr.c) - 指定された値を含むメモリブロックの最初のバイトへのポインタを返す
    - [memcmp](/string/memcmp.c) - ２つのメモリブロックを比較し、大きい方を示す整数を返す
    - [memcpy](/string/memcpy.c) - メモリブロックを別のメモリブロックにコピーする（不安定）
    - [memmove](/string/memmove.c) - メモリブロックを別のメモリブロックにコピーする（メモリブロック重複考慮）
    - [memset](/string/memset.c) - メモリブロック内の全てのバイトに同じ値を設定する
- 文字列コピー
    - [strcpy](/string/strcpy.c) - 文字列のデータを別の文字列のメモリにコピーする
    - [strncpy](/string/strncpy.c) - 文字列の最初のn文字を別の文字列のメモリにコピーする
- 文字列連結
    - [strcat](/string/strcat.c) - 文字列のコピーを別の文字列の末尾に追加する
    - [strncat](/string/strncat.c) - 文字列の一部を別の文字列の末尾に追加する
- 文字列検索
    - [strchr](/string/strchr.c) - 文字列内で文字が最初に出現する位置へのポインタを返す
    - [strpbrk](/string/strpbrk.c) - 文字列内のいずれかの文字が最初に出現する位置を検索し、その位置へのポインタを返す
    - [strrchr](/string/strrchr.c) - 文字列内で文字が最後に出現する位置へのポインタを返す
    - [strspn](/string/strspn.c) - 文字列内のいずれかの文字が一致しない最初の文字を検索し、その位置までの長さを返す
    - [strcspn](/string/strcspn.c) - 文字列内のいずれかの文字が最初に出現する位置を検索し、その位置までの長さを返す
    - [strstr](/string/strstr.c) - 別の文字列内で文字列が最初に出現する位置へのポインタを返す
- 文字列比較
    - [strcmp](/string/strcmp.c) - ２つの文字列を比較し、大きい方を示す整数を返す
    - [strncmp](/string/strncmp.c) - ２つの文字列の最初のn文字を比較し、大きい方を示す整数を返す
- その他
    - [strerror](/string/strerror.c) - エラーメッセージを出力する
    - [strlen](/string/strlen.c) - 文字列の長さ（終端文字までの文字数）を返す
    - [strtok](/string/strtok.c) - 区切り文字を使用して文字列を複数のトークンに分割する

[⬆︎目次に戻る](#目次)

## time.h (時間)

- `time_t`型 - UNIX時間を扱う型
- `struct tm`型 - 「年・月・日・時・分・秒」に分離した形式で時刻を扱う型

<br>

- [time](/time/time.c) - UNIX時間を返す
- [gmtime](/time/gmtime.c) - time_t型のデータをstruct tm型に変換する
- localtime - time_t型のデータをstruct tm型に変換する（現地時間への変換）
- [ctime](/time/ctime.c) - time_t型のデータを文字列に変換する
- [asctime](/time/asctime.c) - struct tm型のデータを文字列に変換する
- [strftime](/time/strftime.c) - 日付の文字列をフォーマットに変換する
- [difftime](/time/difftime.c) - ２つのtime_t値の差を計算する
- mktime - struct tm型をtime_t型に変換する
- clock - プログラムが使用したプロセッサクロックティック数を返す

[⬆︎目次に戻る](#目次)
