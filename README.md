# 学习C++的例子及练习
## C++ Primer Plus
### 第一章
* OOP使用来管理大型项目的工具，而泛型编程为常见的操作提供了便捷方式；
* 编辑器，预处理，编译，链接运行
### 第二章
* 注释//,预处理，名称空间
* 包含头文件：C语言自带的头文件.h，修改成C++的头文件cname，纯正C++头文件无后缀
* 运算符重载是指同一个运算符可表示多个功能
* type funname(parameter list){}
### 第三章
* 数据类型short int long longlong(2,2,4,8) bool\char 1 float 4 double 8(字节)
* 列表初始化：通用初始化int a = {10}, int b{10}
* const比define好的地方：1明确指定类型 2可以缩小作用域到某个函数 3可以定义更加复杂的类型
* +-*/% 其中除法的结果取决于做除法的两个数据类型，如果是整数就得到商
* 类型转换：1 将类型不同的值进行赋值时 2 表达式计算不同类型的数据时
* 强制类型转换：C:(typename) value C++:四种类型转换static_cast<type>(value)、dynamic_cast<>(value)、const_cast<>(value)
* 主要用于复杂类型的类型推断auto
### 第四章
* 数组array的定义typename name[size];
* sizeof(variable)是指变量占几个字节
* cin.getline(name, size)读取一整行数据到字符串内
* string对象较为方便str1 + str2, str1.size(),读取一行的时候使用getline(cin, str)
* 原始字符不转义R"(string)"
* 结构体：struct Name{};
* 指针：type* Name;type* Name[];地址长度为8或者4字节，记得初始化
* 申请内存：malloc和new typename* name = new typename;new比malloc有较多优势
* 删除内存：delete p;释放p所指向的内存块，但是p仍然可以指向别的内存；防止内存泄漏
* 动态数组：typename* name = new typename [number]，其中number可以是变量，从而实现动态修改数组数量；指针在很多时候可以等同于数组名;delete [] name;
* 利用->访问指针对应结构体的成员
* vector<typename>name(num)定义num个vector，动态数组
* array<typename, num>name固定长度数组，较为方便安全
### 第五章
* for(int ;condition;loop){} 
* while(condition){}
* 计时clock()返回系统时间, CLOCKS_PER_SEC
* typedef typename newname;重新定义类别
* for(auto x:variable){}; for(auto &y:variable){}
* cin<<ch会忽略空格输入，cin.get(ch)可以获取空格，cin.fail()是否到达文件尾or while(cin.get(ch))
* 嵌套循环，二维数组int name[m][n]
### 第六章
* cctype包含判断字符是否符合某种格式的函数isalpha(),isdigits(),isspace(),ispunct()
* condition?value1:value2类似于Python的 value1 if condition else value2
* switch() {case value:} 
* 文件操作的时候使用fstream，ofstream object
* 输出可以设定固定格式，cout.put
* 输入数字时cin遇到非数字的认为False
* 输入字符时cin遇到ctrl+z认为结束
* 输入字符串或者string时遇到ctrl+z结束
* 输入一行字符cin.getline(object, size)
### 第七章
* 函数提供声明、定义及调用三个方面，注意函数原型(提前定义函数)
* 返回值(不能传回数组)、输入参数、函数主体
* 函数参数及按值传递或者按引用传递
* 函数参数传入数组int arr[], int number或者int* arr
* const int *arr指arr指向的变量不可改变，而int const *arr指不可以改变arr的指向
* const定义变量必须进行初始化
* 二维数组传入函数，第二个维度必须指定int arr[][n] or int (*arr)[n]
### 第八章
* 内联函数与普通函数的区别主要在于在调用的时候，内联函数不需要跳转到函数的起始地址，而是直接在调用位置进行处理。好处是节省了调用时间，而坏处是增加了函数副本，耗费了内存。
* 使用方式是在声明和定义的位置前加上inline
* 引用变量是指变量的一个别名,必须在定义的时候初始化，且绑定变量后不可改变指向别的变量
* 按引用传递，不需要复制原先的内存，但可以在函数内对原内存进行更改
* 返回const引用变量，目的是使返回的值为右值
* 使用引用作为函数的输入参数主要有两点原因：1 不需要复制原有对象 2 可以更改原有对象
* 如果传递的的对象是类、结构尽量使用引用，对于数组只能使用指针，对于不可改变的加const
* 函数默认值只有原型需要定义，实际定义是不应该专门写出
* 函数重载是指同一个函数名称可以执行多种形态，静态多态，区分两个函数是否相同的关键是看函数名、参数类型及数量
* 函数模板是为了解决对于不同类型的变量执行同一功能时需要定义多个函数的繁杂问题而提出的, template <typename T>
* 同时模板也可以进行重载,不同模板之间或者跟非模板函数之间
* 自定义类型时：
  * decltype: decltpye(x) xx,不会忽略引用，会与原变量x同一类型
  * auto: auto x = ;auto function(), auto会忽略引用, 需要引用时可以auto &x = xx;
### 第八章
* 为了程序便捷性和易拓展方面的考虑，可以代码结构放在头文件(结构定义，函数原型)、源代码文件(函数定义)、源代码文件(主函数调用)，可以用在头文件中的内容：函数声明，#define或者const 定义，类定义，结构定义，内联函数，模板声明
* 自己编写的头文件应该用""来处理，而对于库文件用<>
* 变量的存储生存期：在函数里定义的变量随着函数的退出而消除，存储在栈里面；在函数外定义或函数内使用static定义的变量在运行周期内均存在存于全局静态区域；使用new分配的内存，在不使用delete之前均存在，可能会导致内存泄漏
* C++有一个单定义原则，即所有变量仅能定义一次，而extern用于变量的声明可以进行多次
* 变量的作用域、存活时间及链接性之间是相互独立的
  * 函数内变量(作用和存活均在函数内，无链接性)，函数外变量(作用域和存活均是整个文件，有链接性，其余文件想要访问可以加extern)int a;
  * 加上static(加上const也有同样的效果)均无链接性，在函数内变量(作用在函数内，存活时间是整个文件)，函数外变量(作用和存活均在整个文件)
* 名称空间：namespace name{}，可以添加新的函数和变量，对于名称空间的使用可以直接namespace::fun或者using namespace name;可以对名称空间进行嵌套，尽量将不同的函数放在命名空间中