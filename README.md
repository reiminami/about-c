# About C

*C17

## 目次

1. [命名規則](#命名規則)
1. [Hello World](#hello-world)
1. [変数と定数](#変数と定数)
1. [データ型](#データ型)
1. [条件分岐](#条件分岐)
1. [ループ](#ループ)
1. [配列](#配列)
1. [列挙型](#列挙型)
1. [関数](#関数)
1. [構造体](#構造体)
1. [ポインタ](#ポインタ)
1. [標準関数](#標準関数)
1. [キャスト](#キャスト)
1. [コマンドライン引数](#コマンドライン引数)
1. [可変長引数](#可変長引数)
1. [ヘッダファイル](#ヘッダファイル)

## 命名規則

```c
// マクロ
#define NEW_LINE '\n'

// 列挙子
enum MyEnum {
    ONE,
    TWO,
    THREE,
};

// その他
int x = 10;
```

[⬆︎目次へ戻る](#目次)

## Hello World

**最低限のコード**

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

**コンパイル**

```sh
gcc src/sample.c -o src/sample
```

**実行**

```sh
./src/sample
```

**ディレクティブ** - includeで標準ライブラリやヘッダファイルをインクルード可能

```c
#include <stdio.h>
#include "sample.h"
```

[⬆︎目次へ戻る](#目次)

## 変数と定数

**変数**

```c
int age = 20;
printf("%d歳\n", age);
```

**定数**

```c
const float PI = 3.14;
printf("%f", PI);
```

**static**

```c
static int cnt = 0;
cnt++;
```

**マクロ**

```c
#define NEW_LINE '\n'
#define SUM(a, b) ((a) + (b))

int main() {
    printf("HELLO WORLD%c", NEW_LINE);
    printf("%d\n", SUM(10, 20));
}
```

[⬆︎目次へ戻る](#目次)

## データ型

**型一覧**

```c
int d = 21;
printf("%d\n", d);
char c = 'Z';
printf("%c\n", c);
float f = 1.23f;
printf("%f\n", f);
double lf = 4.56;
printf("%lf\n", lf);
short int hd = 1;
printf("%hd\n", hd);
unsigned int u = 12;
printf("%u\n", u);
long int li = 123;
printf("%li\n", li);
long long int lli = 1234;
printf("%lli\n", lli);
unsigned long int lu = 12345;
printf("%lu\n", lu);
unsigned long long int llu = 123456;
printf("%llu\n", llu);
signed char sc = 'Y';
printf("%c\n", sc);
unsigned char uc = 'X';
printf("%c\n", uc);
long double ld = 7.89;
printf("%Lf\n", ld);
```

**bool** - stdbool.hのインクルードで使用可能

```c
#include <stdbool.h>

int main() {
    bool is_enable = true;
}
```

**文字列** - C言語では、文字列は文字の配列

```c
// 方法1
char name[] = "John";
printf("%s\n", name);
name[0] = 'P';
name[1] = 'a';
name[2] = 'u';
name[3] = 'l';
printf("%s\n", name);

// 方法2
char *name = "John";
printf("%s\n", name);
name = "Paul";
printf("%s\n", name);
```

[⬆︎目次へ戻る](#目次)

## 条件分岐

**if**

```c
if (score == 0) {
    printf("A");
} else if (score == 1) {
    printf("B");
} else {
    printf("C");
}
```

**switch**

```c
switch (score) {
case 0:
    printf("A");
    break;
case 1:
    printf("B");
    break;
default:
    printf("C");
    break;
}
```

[⬆︎目次へ戻る](#目次)

## ループ

**for**

```c
for (int i=0; i<3; i++) {
    printf("%d\n", i);
}
```

**while**

```c
int i = 0;
while (i < 3) {
    printf("%d\n", i++);
}
```

**do-while**

```c
int i = 0;
do {
    printf("%d\n", i++);
} while (i < 3);
```

[⬆︎目次へ戻る](#目次)

## 配列

**初期化・アクセス**

```c
// 基本
int arr[3];
arr[0] = 'A';
arr[1] = 'B';
arr[2] = 'C';

// 簡略化
int nums[3] = {10, 20, 30};

// アクセス
printf("%d\n", nums[2]);

// 要素数
int n = sizeof(nums) / sizeof(nums[0]);
```

**多次元配列**

```c
// 基本
int nums[2][4] = {
    {10, 20, 30, 40},
    {50, 60, 70, 80},
};

// 行数は指定不要
int nums2[][4] = {
    {10, 20, 30, 40},
    {50, 60, 70, 80},
    {90},
};

// 行数
int rows = sizeof(nums) / sizeof(nums[0]);

// 列数
int cols = sizeof(nums[0]) / sizeof(nums[0][0]);

// 要素数
int elms = sizeof(nums) / sizeof(nums[0][0]);
```

[⬆︎目次へ戻る](#目次)

## 列挙型

**enum**

```c
enum Direction {
    TOP,    // 0
    BOTTOM, // 1
    LEFT,   // 2
    RIGHT,  // 3
};

int main() {
    enum Direction dir = BOTTOM;
    printf("%d", dir);
}
```

[⬆︎目次へ戻る](#目次)

## 関数

**定義・使用**

```c
int sum(int a, int b) {
    return a + b;
}

int main() {
    printf("%d\n", sum(10, 20));
}
```

**ファイルの先頭で実装** - 呼び出す前に実装されていない場合エラーになる

```c
int sum(int a, int b);

int main() {
    printf("%d\n", sum(10, 20));
}

int sum(int a, int b) {
    return a + b;
}
```

**ポインタの値渡し** - ポインタを使用して参照渡しにする

```c
void increment(int *x) {
    (*x)++;
}

int main() {
    int number = 10;
    printf("%d\n", number); // 10
    increment(&number);
    printf("%d\n", number); // 11
}
```

**構造体へのポインタ**

```c
struct Point {
    int x, y;
};

void move(struct Point *p) {
    p->x++;
    p->y++;
};

int main() {
    struct Point point;
    point.x = 10;
    point.y = 5;
    move(&point);
}
```

**static**

```c
static int get_one() {
    return 1;
}
```

[⬆︎目次へ戻る](#目次)

## 構造体

**定義**

```c
struct Person {
    char *name;
};
```

**インスタンス生成**

```c
struct Person person;
person.name = "John";
printf("%s\n", person.name);
```

**複数の構造体データを扱う**

```c
typedef struct Person person_data;

int main() {
    person_data data[] = {
        {"John"},
        {"Paul"},
    };
}
```

[⬆︎目次へ戻る](#目次)

## ポインタ

**ポインタ** - 値そのものではなく、値を指すメモリアドレスを保持する変数

```c
int age = 20;
int *p_age = &age;
printf("%d\n", *p_age);
```

**操作**

```c
age++;          // 21
age += 1;       // 22
(*p_age)++;     // 23
(*p_age) += 1;  // 24
```

**動的割り当て** - データサイズを把握する必要がなくなる

```c
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char *name;
    int age;
} Person;

int main() {
    Person *person = malloc(sizeof(Person));
    person->name = "John";
    person->age = 22;
}
```

**メモリ解放**

```c
int main() {
    Person *person = malloc(sizeof(Person));

    // 処理

    free(person);
}
```

**配列とポインタ**

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 4;
    char* *names = (char* *) malloc(n * sizeof(*names));
    names[0] = "John";
    names[1] = "Paul";
    *(names + 2) = "George";
    names[3] = "Ringo";

    for (int i=0; i<n; i++) {
        printf("%s\n", names[i]);
    }

    free(names);
}
```

**NULL**

```c
// NULL
int *p = NULL;

// NULLチェック
if (p != NULL) {
    printf("...");
}
```

[⬆︎目次へ戻る](#目次)

## 標準関数

**stdio.h** - 入出力

- [空ファイル作成](/src/stdio/make_empty_file.c)
- [ファイル追記](/src/stdio/file_appending.c)
- [ファイル書き込み](/src/stdio/file_write.c)
- [ファイル読み込み](/src/stdio/file_read.c)
- [ファイルポインタ](/src/stdio/file_pointer.c)
- [ユーザー入力を読み込む](/src/stdio/user_input.c)
- [フォーマット文字列を文字列に書き込む](/src/stdio/sprintf.c)
- [文字列から数値を抽出する](/src/stdio/sscanf.c)

```c
// 出力
printf("Hello, World!\n");
// ファイル名[0]を[1]に変更
rename("output.txt", "output2.txt");
// ファイル[0]を削除
remove("output2.txt");
// コンソールに文字列を書き込む
puts("Yeah");
// コンソールに文字を書き込む
putchar('A');
```

**math.h** - 数学

```c
printf("%f\n", fabs(-2.5));             // 絶対値
printf("%f\n", ceil(1.1));              // 切り上げ
printf("%f\n", floor(1.9));             // 切り捨て
printf("%f\n", round(4.5));             // 浮動小数展を丸める
printf("%f\n", trunc(4.9));             // 整数部分を返す
printf("%f\n", fmin(3.1, 3.2));         // 最小値
printf("%f\n", fmax(3.1, 3.2));         // 最大値
printf("%f\n", fmod(15.0, 2.0));        // 余り
printf("%f\n", remainder(15.0, 2.0));   // 剰余
printf("%f\n", pow(3.0, 4.0));          // べき乗
printf("%f\n", hypot(1.0, 1.0));        // 原点からの距離
```

**stdlib.h** - ユーティリティ

- [calloc](/src/stdlib/calloc.c) - メモリを割り当てて値を書き込む (0埋め)
- [malloc](/src/stdlib/malloc.c) - メモリを割り当てる
- [realloc](/src/stdlib/realloc.c) - 新しくメモリを割り当てる
- [qsort](/src/stdlib/qsort.c) - 配列の要素を小さい順に並べる
- [乱数を使う](/src/stdlib/rand.c)

```c
// abs - 絶対値
int n = abs(-5);
printf("%d\n", n);

// div - 商と余り
div_t result = div(13, 5);
printf("%d %d\n", result.quot, result.rem);
```

**string.h** - 文字列

- [strcpy](/src/string/strcpy.c) - 文字列[1]を文字列[0]のメモリにコピー
- [strncpy](/src/string/strncpy.c) - 文字列[1]の最初の[2]文字を文字列[0]のメモリにコピー
- [strcat](/src/string/strcat.c) - 文字列[0]の末尾に文字列[1]を連結
- [strncat](/src/string/strncat.c) - 文字列[0]の末尾に文字列[1]の最初の[2]文字を連結
- [strchr](/src/string/strchr.c) - 文字列[0]で文字[1]が最初に出現する位置へのポインタ
- [strrchr](/src/string/strrchr.c) - 文字列[0]で文字[1]が最後に出現する位置へのポインタ
- [strpbrk](/src/string/strpbrk.c) - 文字列[0]で、文字列[1]のいずれかの文字が最初に出現する位置へのポインタ
- [strstr](/src/string/strstr.c) - 文字列[0]で、文字列[1]が最初に出現する位置へのポインタ
- [strspn](/src/string/strspn.c) - 文字列[0]で、文字列[1]のいずれかの文字が一致しない最初の文字までの長さ
- [strcspn](/src/string/strcspn.c) - 文字列[0]で、文字列[1]のいずれかの文字が最初に出現する位置までの長さ
- [strcmp](/src/string/strcmp.c) - 文字列[0], [1]を比較し、大きい方を示す整数を返す
- [strncmp](/src/string/strncmp.c) - 文字列[0], [1]の最初の[2]文字を比較し、大きい方を示す整数を返す
- [strerror](/src/string/strerror.c) - エラーメッセージを出力する
- [strlen](/src/string/strlen.c) - 文字列[0]の終端文字までの文字数
- [strtok](/src/string/strtok.c) - 文字列[0]を区切り文字[1]で複数のトークンに分割する
- [memchr](/src/string/memchr.c) - 文字列[0]から文字[1]を含むメモリブロックの最初のバイトへのポインタ
- [memcmp](/src/string/memcmp.c) - 文字列[0], [1]の最初の[2]文字を比較し、大きい方を示す整数を返す
- [memcpy](/src/string/memcpy.c) - メモリブロックを別のメモリブロックにコピーする (不安定)
- [memmove](/src/string/memmove.c) - メモリブロックを別のメモリブロックにコピーする (メモリブロック重複考慮)
- [memset](/src/string/memset.c) - メモリブロック内の全てのバイトに同じ値を設定

**ctype.h** - 文字

```c
char c = 'Z';
int x = -1;

x = isalpha(c);     // 文字か？
x = isblank(c);     // スペースか？
x = iscntrl(c);     // 制御文字 (\n, \t, \bなど)か？
x = isdigit(c);     // 数字か？
x = isgraph(c);     // グラフィカル表現 (!, ", #, $, %, &, ', *)か？
x = islower(c);     // 小文字か？
x = isupper(c);     // 大文字か？
x = isprint(c);     // 印刷可能な文字か？
x = ispunct(c);     // 区切り文字か？ (ロケールにより判定変化)
x = isspace(c);     // 空白 (スペース, タブ, 改行)か？
x = isxdigit(c);    // 16進数か？
c = tolower(c);     // 小文字化
c = toupper(c);     // 大文字化
```

**time.h** - 時間

- `time_t型` - UNIX時間を扱う型
- `struct tm型` - [年月日時分秒]に分離した形式で時刻を扱う型
- [time](/src/time/time.c) - UNIX時間
- [gmtime](/src/time/gmtime.c) - time_t型をstruct tm型に変換
- [ctime](/src/time/ctime.c) - time_t型を文字列に変換
- localtime - time_t型をstruct tm型に変換 (現地時間)
- [asctime](/src/time/asctime.c) - struct tm型を文字列に変換
- [strftime](/src/time/strftime.c) - 日付の文字列をフォーマットに変換
- [difftime](/src/time/difftime.c) - 2つのtime_tの差を計算
- mktime - struct tm型をtime_t型に変換
- clock - プログラムが使用したプロセッサ・クロックティック数を返す

[⬆︎目次へ戻る](#目次)

## キャスト

**キャスト演算子**

```c
double avg = (double) 17 / 5;
printf("%f", avg);
```

**型変換**

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    float pi = atof("3.14");
    int age = atoi("20");
    long hp = atol("9999");
    long long t = atoll("123456");
    printf("%f %i %li %lli\n", pi, age, hp, t);
}
```

[⬆︎目次へ戻る](#目次)

## コマンドライン引数

**コード**

```c
#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("PROGRAM NAME: %s\n", argv[0]);

    if (argc > 1) {
        for (int i=1; i<argc; i++) {
            printf("%s\n", argv[i]);
        }
    }
}
```

**引数なしで実行**

```sh
$ ./src/sample
PROGRAM NAME: ./src/sample
```

**引数ありで実行**

```sh
$ ./src/sample 10 20 30
PROGRAM NAME: ./src/sample
10
20
30
```

[⬆︎目次へ戻る](#目次)

## 可変長引数

`stdarg.h` を使用することで実現可能

```c
#include <stdio.h>
#include <stdarg.h>

void output(int num, ...) {
    va_list valist;
    va_start(valist, num);
    for (int i=0; i<num; i++) {
        printf("%s\n", va_arg(valist, char *));
    }
}

int main() {
    output(3, "John", "Paul", "George");
}
```

[⬆︎目次へ戻る](#目次)

## ヘッダファイル

- [sub.h](/src/sub.h)
- [sub.c](/src/sub.c)

[⬆︎目次へ戻る](#目次)
