/**=================================================================================================
 * @file	test6.43.cpp.
 *
 * Implements the test 6.43 class
 * 练习 6.43:你会把下面的哪个声明和定义放在头文件中？ 哪个放在源文件中？ 为什么？
 * (a)inline bool eq(const Biglnt&, const Biglnt&) {...}   头文件
 * (b)void putValues(int *arr, int size);  头文件，函数声明
 *  
 *  书本原话：
 *  因为内联函数的定义对编译器而言必须是可见的， 以便编译器能够在调用点内联展开该函数的代码， 所以仅有函数的原型不够。 
 *  并且， 与一般函数不同， 内联函数有可能在程序中定义不止一次， 此时必须保证在所有源文件中定义完全相同， 
 *  把内联函数的定义放在头文件中可以确保这一点。
 *===============================================================================================**/
