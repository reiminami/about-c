# about-c

*C17

## 目次

- [CHAPTER 1: Hello World](#chapter-1-hello-world)
- [CHAPTER 2: 変数とデータ型](#chapter-2-変数とデータ型)
- [CHAPTER 3: 文字列](#chapter-3-文字列)
- [CHAPTER 4: 条件分岐](#chapter-4-条件分岐)
- [CHAPTER 5: ループ](#chapter-5-ループ)
- [CHAPTER 6: 配列](#chapter-6-配列)
- [CHAPTER 7: 多次元配列](#chapter-7-多次元配列)
- [CHAPTER 8: 静的](#chapter-8-静的)
- [CHAPTER 9: 構造体](#chapter-9-構造体)
- [CHAPTER 10: 関数](#chapter-10-関数)
- [CHAPTER 11: 関数の引数の参照渡し](#chapter-11-関数の引数の参照渡し)
- [CHAPTER 12: ポインタ](#chapter-12-ポインタ)
- [CHAPTER 13: 動的割り当て](#chapter-13-動的割り当て)
- [CHAPTER 14: 配列とポインタ](#chapter-14-配列とポインタ)

## CHAPTER 1: Hello World

コードを作成します。

```c
#include <stdio.h>

int main() {
    printf("Hello, World");
    return 0;
}
```

コンパイル＆実行します。

```sh
gcc hello_world.c -o hello_world
./hello_world
```

[⬆︎目次に戻る](#目次)

## CHAPTER 2: 変数とデータ型

[datatypes.md](/datatypes.md)に記載されているように、さまざまな型が使えます。

```c
char initial = 'R';
printf("%c\n", initial);
```

boolは標準ライブラリ`stdbool.h`で使用できます。

```c
#include <stdbool.h>

...
bool is_enable = false;
```

定数も使えます。

```c
const int MAX_HP = 9999;
```

defineを使用することで、定数やマクロの宣言も可能です。

```c
#define NEWLINE '\n'
#define SUM(a, b) ((a) + (b))

...
printf("Hello%cWorld%c", NEWLINE, NEWLINE);
printf("%d\n", SUM(10, 20));
```

[⬆︎目次に戻る](#目次)

## CHAPTER 3: 文字列

C言語の文字列は「文字の配列」です。

```c
char *name = "Thom Yorke";
printf("%s\n", name);
```

読み取り先頭の文字列定義も可能です。

```c
char name[] = "Ringo Starr";
name = "R.S";  // エラー
```

文字列の長さ取得の例です。

```c
#include <string.h>

...
int name_len = strlen(name);
```

文字列の比較の例です。

```c
char *name1 = "Jojo";
char *name2 = "Jojo";
if (strncmp(name1, name2, 4) == 0) {
    printf("一致\n");
}
```

[⬆︎目次に戻る](#目次)

## CHAPTER 4: 条件分岐

if文が使えます。

```c
if (age == 20) {
    printf("ギリ買える");
} else if (age > 20) {
    printf("買える");
} else {
    printf("買えない");
}
```

switch文も使えます。

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

## CHAPTER 5: ループ

forループが使えます。

```c
int i;
for (i=0; i<5; i++) {
    printf("%d\n", i);
}
```

whileループも使えます。ループ処理では`continue`でやり直し、`break`でループ停止ができます。

```c
int n = 0;
while (n < 5) {
    n++;
    printf("%d\n", n);
}
```

do-whileループも使えます。

```c
int x = 0;
do {
    x++;
    printf("%d\n", x);
} while (x < 3);
```

[⬆︎目次に戻る](#目次)

## CHAPTER 6: 配列

1つの変数名で複数の値を保持できます。

```c
int score[3];
score[0] = 100;
score[1] = 80;
score[2] = 95;
```

宣言は簡略化できます。

```c
int score[3] = {100, 80, 95};
```

配列要素数の取得例です。

```c
int n = sizeof(score) / sizeof(score[0]);
```

配列の出力例です。

```c
for (int i=0; i<n; i++) {
    printf("%d\n", score[i]);
}
```

[⬆︎目次に戻る](#目次)

## CHAPTER 7: 多次元配列

配列の多次元版です。

```c
int results[2][5] = {
    {90, 97, 86, 95, 99},
    {58, 60, 66, 87, 62}
};
```

行数の指定は不要です。

```c
int results[][5] = {
    {90, 97, 86, 95, 99},
    {58, 60, 66, 87, 62},
    {0, 21, 30, 84, 30}
};
```

多次元配列の行数・列数の取得例です。

```c
int rows = sizeof(results) / sizeof(results[0]);
int cols = sizeof(results[0]) / sizeof(results[0][0]);
```

多次元配列の出力例です。

```c
for (int i=0; i<rows; i++) {
    for (int j=0; j<cols; j++) {
        printf("%3d", results[i][j]);
    }
    printf("\n");
}
```

[⬆︎目次に戻る](#目次)

## CHAPTER 8: 静的

静的変数は、ファイルのどこからでもアクセスできます。

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

静的関数も使えます。

```c
static int get_one() {
    return 1;
}
```

[⬆︎目次に戻る](#目次)

## CHAPTER 9: 構造体

クラスとオブジェクトの基盤となる複合データ型です。

```c
struct Person {
    char *name;
    int age;
};

int main() {
    struct Person p;
    p.name = "John";
    p.age = 20;
    printf("%s\n", p.name);
}
```

複数の構造体データも扱えます。

```c
struct Person {
    char *name;
    int age;
};

typedef struct Person person_data;

int main() {
    person_data data[] = {
        {"John", 20},
        {"Paul", 19},
    };
}
```

[⬆︎目次に戻る](#目次)

## CHAPTER 10: 関数

関数が使用できます。

```c
int sum(int a, int b) {
    return a + b;
}

int main() {
    int x = sum(5, 2);
    printf("%d\n", x);
}
```

ヘッダファイルや先頭での実装も可能です。

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

## CHAPTER 11: 関数の引数の参照渡し

関数の引数は「値渡し」で、関数間で値をコピーして渡します。

ポインタを使用して、参照渡しすることも可能です。

```c
void up(int *x) {
    (*x)++;
}

int main() {
    int num = 10;
    up(&num);       // 11
}
```

構造体へのポインタも可能です。この場合、簡略化できます。

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
    struct Point point;
    point.x = 10;
    point.y = 5;
    move(&point);   // x=11, y=6
}
```

[⬆︎目次に戻る](#目次)

## CHAPTER 12: ポインタ

ポインタは値そのものでなく、値を指すメモリアドレスを保持する整数の変数です。

```c
int age = 20;
int *p_age = &age;
printf("%d\n", *p_age); // 20
```

`(*ポインタ名)`に対して操作できます。

```c
age++;
printf("%d %d\n", age, *p_age); // 21 21
age += 1;
printf("%d %d\n", age, *p_age); // 22 22
(*p_age)++;
printf("%d %d\n", age, *p_age); // 23 23
(*p_age) += 1;
printf("%d %d\n", age, *p_age); // 24 24
```

[⬆︎目次に戻る](#目次)

## CHAPTER 13: 動的割り当て

「メモリの動的割り当て」は、リンクリストなどの複雑なデータ構築に役立ちます。

プログラム作成時にデータサイズを把握する必要がなくなるのです。

```c
typedef struct {
    char *name;
    int age;
} Person;

int main() {
    Person *psn = (Person*) malloc(sizeof(Person));
}
```

`->`を使います。

```c
psn->name = "John";
psn->age = 22;
```

`free`でメモリの解放ができます。

```c
#include <stdlib.h>

...
free(psn);
```

[⬆︎目次に戻る](#目次)

## CHAPTER 14: 配列とポインタ

配列にもポインタが使用できます。

```c
int n = 5;
char *alphabets = (char*) malloc(n * sizeof(char));

alphabets[0] = 'a';
alphabets[1] = 'b';
*(alphabets + 2) = 'c';
alphabets[3] = 'd';
```

使い終わったら例の如くメモリを解放します。

```c
#include <stdlib.h>

...
for (int i=0; i<n; i++) {
    printf("%c ", alphabets[i]);
}

free(alphabets);
```

[⬆︎目次に戻る](#目次)
