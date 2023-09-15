# introducing-0

## 成绩构成
- **平时10+机试15（1/3）+20（2/3）+期末机试30（3hours）+期末项目25（寒假作业）**
- 抄袭扣平时分，不要抄袭

## 教材
The programming language(年代久远，有些过时；书很薄，内容精炼，不推荐初学者，学期结束可看)
疲劳自救手册

## class 0

### Hello World
1. 操作
  1. CmakeLists.txt
`cmake_minimun_required(VERSION 3.25)`
`project(2023-cpl-coding-2 C)`
`set(CMAKE_C_STANDARD 17)`
`add_executable(hello hello.c)`
  2. hello.c
  3. 添加.exe
gcc -o hello
.\hello.c
  4. 注释
`//注释`或`/*注释*/`
2. 内容解释
  1. main函数
int main()
{
    //花括号内为函数体
    //"hello world": string字符串
    //printf: print + f (format)打印
    printf("Hello World\n")；
    //0: exit code
    return 0；
}
  2. 指令"# + <codename>"
`#include <stdio.h>`
//.h: header file头文件
//stdio: standard input/outout标准输入输出

### Guess
```
#include <stdio.h>
#include <time.h>

int main()
{
    int high = 100;
    int chance = 7;

    //print the rule
    printf("The computer will generate a random number between 1 and %d\n"
           "You have %d chances", high, chance);

    //generate a random number
    int secret;

    while (chance > 0){

    srand(time(NULL));
    int secrect = rand() % high + 1;

    //let the player enter his guess number
    //store the guss number,
    //compaare it with the secret,
    //and inform the player of the result
    int guess;
    scanf("%d", &guess);
    
    if (guess == secret) {
        printf(""You Win!\n);
        break
    }   else if (guess > secret);{
        printf("guess > secret")
    }   else{
        printf(""guess < secret)
    }

    //loop:repeat until the player 
    chance = chance - 1;
    }
}
```

### git上传