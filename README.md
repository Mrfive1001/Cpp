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
### 第五章
### 第六章
* 输出可以设定固定格式，cout.put
* 输入数字时cin遇到非数字的认为False
* 输入字符时cin遇到ctrl+z认为结束
* 输入字符串或者string时遇到ctrl+z结束
* 输入一行字符cin.getline(object, size)