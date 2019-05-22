/**=================================================================================================
 * @file	test6.53.cpp.
 *
 * Implements the test 6.53 class
 * 练习 6.53： 说明下列每组声明中的第二条语句会产生什么影响, 并指出哪些不合法（ 如果有的话）。
 * (a) int calc(int&, int&);
 * int calc(const int&, const int&);   合法，const用于重载时针对引用和指针都可以。
 * (b) int calc(char*, char*);
 * int calc(const char*, const char*); 合法，const用于重载时针对引用和指针都可以。
 * (c) int int calc calc( (char char**,const char”, ；char* const);  非法；看不懂什么意思。
 *===============================================================================================**/
