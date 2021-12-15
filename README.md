# Monasticism
### 项目目的
- 以Monasticism的态度重新审阅并提高自己的C语言层次
- 项目完毕后，开始数据结构初级阶段的学习，然后是C++语言的学习，直至进入数据结构进阶阶段的学习
### 平台、工具概述

- 操作系统：macOS Catalina 10.15

- 代码环境：Visual Studio Code 1.50.1

- 编译器    ：gcc 6.5.0

- 书写工具：Typora 0.11.18

- 学习流程：
  
  | 流程名称   | 所用工具        |
  | ---------- | --------------- |
  | 做计划     | Note + Calender |
  | 编程       | VS Code         |
  | 编写Readme | Typora          |

### 参考资料

- 李慧芹老师b站网课
- TBC...

### 项目概述

[第01章 基本概念](https://github.com/AndyHsu-cn/Monasticism/tree/main/01basic)

**编程要求**

- 头文件包含的重要性
- 添加**-Wall**'选项，将更多警告暴露出来并修改完
- 以函数为单位编写程序
- 书写规范的注释（可以参考linux内核源码）

***

[第02章 数据类型、运算符和表达式](https://github.com/AndyHsu-cn/Monasticism/tree/main/02data)

**01 实数比较不要使用==**

```
fabs(value1 - value2) <= 1e-6则可认为两数相等
```

**02 全局变量谨慎使用**

**03 逻辑运算符&&和||有短路特性**

**04 位运算（嵌入式开发者要重视）**

*^异或*  <=>  相同为0，不同为1

``` c
将操作数第n位置置1，其他位置不变      num = num | 1<<n
将操作数第n位置置0，其他位置不变      num = num & ~(1<<n)
测试指定位                         if(j & 1<<n)
```

***

[第03章 输入输出专题](https://github.com/AndyHsu-cn/Monasticism/tree/main/03io)

**01 printf、scanf函数是变参函数**

```
int printf(const char * restrict format, ...);
int scanf(const char *restrict format, ...);
```

**02 传参数，很少使用char类型，而会用int代替**

出于考虑出错时的判别（如EOF）

``` C
int getchar(void);
int putchar(int c);
```

**03 缓冲区**

``` c
1、scanf()家族里format中white space会match任意数量的white space【包含0个】
2、scanf()家族会将没有match成功的字符放回缓冲区
```

***

[第04章 流程控制](https://github.com/AndyHsu-cn/Monasticism/tree/main/04control)

**01 switch语句注意事项**

- case是跳入标志，break是跳出标志

**02 do while有时候也是需要的 — 比如，提供菜单+用户选择这样的场景**

**03 if和goto搭配也可以实现跳转，但是要谨慎使用**

- goto实现的无条件跳转
- 跳转到的label只能在本函数
- 过多使用goto破坏结构化编程

```c
loop:
    sum += i;
    i++;
    if(i <= MAX)
        goto loop;
    printf("sum = %d\n", sum);
```

***

[第05章 数组](https://github.com/AndyHsu-cn/Monasticism/tree/main/05array)

**01 C语言中的构造类型**

- **数组**
  - 一维数组
  - 二维数组
  - 字符数组
- 结构体 struct
- 共用体 union
- 枚举 enum

**02 数组名的含义**

- 数组名是**表示地址（数组的起始位置）的常量**
- a[i] = *(a+i)，基于这个设计，C语言也就对于检查数组越界无能为力了【是缺点也是优点】

**03 Fibonacci数列**

``` c
for (i = 0; i < LIMIT; i++){
        if(i >= 2)
            sequence[i] = sequence[i-1]+sequence[i-2]; 
        printf("sequence[%d] = %d\n", i+1, sequence[i]);
}
```

**04 冒泡排序法**

``` c
for ( i = 0; i < num-1; i++)
{		// flagExchange为0，表示此轮未交换(默认)； 为1，表示此轮交换过
        flagExchange = 0;
        for(j = 0; j < num-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                flagExchange = 1;
            }
        }
        if(!flagExchange)
            break;
}
```

**05 选择排序法**

``` c
for ( i = 0; i < num-1; i++)
{
        index_min = i;
        for ( j = i+1; j < num; j++)
        {
            if(arr[j] < arr[index_min])
                index_min = j;
        }
        if(index_min != i){
            tmp = arr[i];
            arr[i] = arr[index_min];
            arr[index_min] = tmp;
        }
}
```

**06 字符数组常用函数 -- 长度不受限函数**

``` c
char * strcpy(char * dst, const char * src);
// 不论dst空间是否足够大，src所有内容都将拷贝到dst中
// 程序员要自己保证dst足够大到容纳src和NUL，否则mac下提示illegal hardware instruction

char * strcat(char *restrict s1, const char *restrict s2);
// 程序员要自己保证dst足够大到容纳s1、s2和NUL，否则mac下提示illegal hardware instruction

char * stpcpy(char * dst, const char * src);
```

**07字符数组常用函数 -- 长度受限函数**

``` c
char * stpncpy(char * dst, const char * src, size_t len);
// 不论strlen(src)和len大小如何，该函数向dst写入len个字符
// 若src不够len个大小，则全用NUL补够；否则dst将不以NUL字节结尾

char * strncat(char *restrict s1, const char *restrict s2, size_t n);
// 拷贝最多n个字符到s1中，绝对再在末尾添加NUL字节结尾
// n最好设置为sizeof(s1) - strlen(s1) - 1

int strncmp(const char *s1, const char *s2, size_t n);
```

[第06章 指针](http://www.baidu.com)

[第07章 函数](http://www.baidu.com)

[第08章 构造类型](http://www.baidu.com)

[第09章 动态内存管理](http://www.baidu.com)

[第10章 调试工具和调试技巧 - gdb + make](http://www.baidu.com)

[第11章 常用库函数](http://www.baidu.com)



