# 学习C++的例子及练习
## C++ Primer Plus
### 第一章
* OOP使用来管理大型项目的工具，而泛型编程为常见的操作提供了便捷方式；
* 编辑器，预处理，编译，链接运行
### 第二章
* 注释//,预处理，名称空间
* 包含头文件：C语言自带的头文件.h，修改成C++的头文件cname，纯正C++头文件无后缀
* 运算符重载是指同一个运算符可表示多个功能
* type funname(parameter list){},函数声明时必须定义完整(除了变量名称),在实际定义时可以省略前面的修饰符
### 第三章
* 数据类型short int long longlong(2,2,4,8) bool\char 1 float 4 double 8(字节)
* 列表初始化：通用初始化int a = {10}, int b{10}
* const比define好的地方：1明确指定类型 2可以缩小作用域到某个函数 3可以定义更加复杂的类型
* +-*/% 其中除法的结果取决于做除法的两个数据类型，如果是整数就得到商
* 类型转换：1 将类型不同的值进行赋值时 2 表达式计算不同类型的数据时
* 强制类型转换：C:(typename) value C++:四种类型转换static_cast<type>(value)、dynamic_cast<>(value)、const_cast<>(value)
  * static_cast<type>(value)可以转换基本语言类型，尽量不要用于指针的转换
  * dynamic_cast<type>(value)主要用于基类派生类指针或者引用之间的互相转换，在调用函数时派生类引用和指针可以自动转换为基类指针和引用，而反过来的转换需要进行类型检查，尽量少用转换
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
### 第九章
* 为了程序便捷性和易拓展方面的考虑，**可代码结构放在头文件(结构定义，函数原型)、源代码文件(函数定义)、源代码文件(主函数调用)，可以用在头文件中的内容：函数声明，#define或者const 定义，类定义，结构定义，内联函数，模板声明**
* 自己编写的头文件应该用""来处理，而对于库文件用<>
* 变量的存储生存期：在函数里定义的变量随着函数的退出而消除，存储在栈里面；在函数外定义或函数内使用static定义的变量在运行周期内均存在存于全局静态区域；使用new分配的内存，在不使用delete之前均存在，可能会导致内存泄漏
* C++有一个单定义原则，即所有变量仅能定义一次，而extern用于变量的声明可以进行多次(static和const变量可以定义)
* 变量的作用域、存活时间及链接性之间是相互独立的
  * 函数内变量(作用和存活均在函数内，无链接性)，函数外变量(作用域和存活均是整个文件，有链接性，其余文件想要访问可以加extern int a;
  * 加上static(加上const也有同样的效果)均无链接性，在函数内变量(作用在函数内，存活时间是整个文件)，函数外变量(作用和存活均在整个文件)
* 名称空间：namespace name{}，可以添加新的函数和变量，对于名称空间的使用可以直接namespace::fun或者using namespace name;可以对名称空间进行嵌套，尽量将不同的函数放在命名空间中
### 第十章
* 通常将类声明放到头文件中，将类实现放到具体文件中，类名大写
* 将实现细节和公有接口分开成为封装，数据隐藏也是一种封装，对于CPP的默认类成员是私有属性的，而对于结构的默认成员是公共属性的
* 类成员函数的具体实现type classname::fun()，位于类声明内的有定义的函数自动成为内联函数
* 每个实例都会为自身变量开辟内存空间
* 类构造函数是用于在创建对象时进行类内变量初始化的，且没有返回值及返回类型
* 没有自定义构造函数时，程序会自定义默认构造函数stock::stock() {},一旦自定义了构造函数就无法使用默认构造函数
* 析构函数用于在类销毁时进行的操作，stock::~stock(){}
* 实例之间进行赋值时，会默认将各个成员进行赋值
* 类实例化的初始化: Stock stock(a1, a2) or Stock stock = Stock(a1, a2) or Stock stock ={1, 34}
* 在类成员函数后加const，保证成员函数不改变类内成员，也适用于const实例，stock::convert() const;
* this指针代表类实例本身，可以引用this->data
### 第十一章
* 运算符重载是指同一个运算符在不同的操作数下能够实现不同的功能operator op(argument list)
* 重载运算符的限制：
  * 重载运算符至少有一操作数是用户自定义类型，不能对原有标准操作进行重载
  * 不能改变原有运算符操作数数量，不能创建新的运算符，有一些类似于sizeof，.:不能进行重载
* 运算符重载大部分既可以通过友元函数，也可以成员函数进行定义
* 类的类型转换，operator typename()，如果在构造函数前加上explicitly，则构造函数仅可用于显示类型转换
### 第十二章
* 静态类成员是单独存储的，并不属于某个对象，因此在类内只能声明而不能进行定义static int Number;定义变量在方法实现文件中int stringBad::Number = 10;对于常量可以直接在类内定义const static int Number = 10;
* 类会自动定义复制构造函数和赋值运算符，默认是将类内成员直接进行拷贝，也就是浅拷贝Name::Name(const Name &b){};
  * 复制构造函数显示调用是利用已经存在的实例来初始化新实例，或者调用传递值的函数
  * 赋值运算符一般是利用实例来重新设置已经存在实例的过程bad = notgood;
* C++11的空指针 str = nullptr;
* 静态成员函数static int fun();只能调用静态类成员，stringBad::fun();
* 返回对象的四种类型(const非引用，const引用，引用，非引用)
* new和delete会自动调用构造函数和析构函数
* 成员初始化列表：对于引用类型和const类型的成员变量来说必须使用成员初始化列表进行初始化，否则将会出现未被初始化的错误；变量被初始化的顺序与声明的顺序相同。vector::vector(int a):name(a){}
### 第十三章
* 对于类内成员初始化：
  * 数组不可初始化
  * 其余都可在类内初始化
* 继承的三种方式class son : type father
  * public: 是指将基类的各个属性成员变成派生类的对应成员 is-a关系
  * protected：是指将基类的public和protected变成protected成员
  * private：是指将基类的所有成员变成派生类的private成员
  * 这里的变成相应的成员是指外界能不能访问，而对于派生类来说不能访问基类的private成员
* 基类和派生类的关系
  * 派生类可以调用基类非私有方法
  * 基类指针和引用能指向派生类对象，但无法使用派生类专有函数(因此定义以基类指针或者引用为参数的函数也可以接受派生类对象)
* 动态多态通过virtual来实现，执行的函数根据指针指向对象的类型来决定
* 在类的声明里加上virtual以及const，而在定义时不加virtual
* 虚析构函数
  * 非虚析构函数，基类指针只调用基类的析构函数，而不会调用派生类的析构函数
  * 虚析构函数，基类指针首先调用指向对象类型的析构函数，之后调用基类析构函数
* 虚函数的实现是利用虚函数表
* 如果派生类函数与基类函数同名，但是参数不同。此时不论有没有virtual基类函数都被隐藏
* 如果同名参数相同，没有virtual的时候基类函数被隐藏
### 第十四章-第十五章
* 类模板template <clase type>类的声明，同时模板定义和声明放在一个文件里面
* 对于类模板的定义需要将原始的class::fun()改为template <class type>\n   class<type>::fun()
* 类内嵌套结构体和类
* 异常：
  * cstdlib的abort函数用来出现异常退出程序
  * try catch throw
* RTTI(Real time type identification)
  * dynamic_cast


## Effective C++
* 条款1：将C++认为是四个部分组成的联盟(basic C, object-oriented C++, Template, STL)
  * Basic C包括了指针、传值、blocks、语句、预处理、内置类型、数组
  * Object-oriented C++包括封装、继承、传引用、接口、虚函数
  * Template是大多数程序员编程经验较少的一部分，泛型编程
  * STL是模板库，拥有较为强大的功能，sort、array、string、vector
* 条款2：尽量以const、enum和inline来替代define
  * const通常定义在头文件中，在类中的const变量声明为static
* 条款3：尽可能使用const
  * const如果出现在星号左边表示被指变量是常量，出现在星号右边表示指针自身是常量
  * 将const用于成员函数，尽可能使用
* 条款4：确定对象使用前已被初始化，尽量对对象初始化
  * 对于类的初始化尽量使用成员初始化列表
* 条款5：了解自动定义哪些类函数，默认构造函数、复制构造函数、赋值运算符、析构函数这些函数都是public而且inline的
* 条款6：如果不想使用类自带的函数，就应该明确拒绝，将赋值运算符和复制构造函数声明为private，从而防止外界调用
* 条款7：为多类基态声明virtual析构函数，而当类不需要被继承时，析构函数也不需要被设置为virtual，从而节省内存；有时为析构函数设置为纯虚十分方便，virtual ~Board() = 0,就没办法实例化了。
* 条款8：别让异常逃离析构函数
* 条款9：别在构造函数和析构函数过程中调用virtual函数
* 条款10：令operator=返回一个引用*this的变量
* 条款11：在operator=里面处理自我赋值
* 条款12：复制对象时不要忘记任何一个成员


## Read Apollo
* 对于类内函数想要省略函数体可以
  * 对于默认构造函数，析构函数，复制构造函数和赋值运算符可以加入=default来自动生成函数体,加入=delete删除此类函数。
  * 对于普通函数可以加入{}来变成内联函数，加入virtual fun() = 0变成抽象类；
* 对于类内的变量定义
  * 可以赋初值