/**=================================================================================================
 * @file	test6.2.cpp.
 *
 * Implements the test 6.2 class
 * 练习 6.2: 请指出下列函数哪个有错误， 为什么？ 应该如何修改这些错误呢？
 * (a)int f() {
 * string s;
 * //...
 * return s;}
 * 错误：int类型的函数返回的却是string 类型的值。函数类型与返回值类型应一致。
 * (b)f2(int i) { /* ... / }
 * 错误：有形参，所以应该设置函数类型，然后函数体里面应当有相同类型的返回值。
 * (c)int calc(int vl, int vl) / … / }
 * 错误：首先函数是符合语句，没有左边花括号，其次，函数体内部没有设置返回值。
 * (d)double square(double x) return x* x;
 * 错误：函数最外层作用域中的局部变量也不能使用与函数形参一样的名字。函数体是符合语句，也没写花括号。
 *===============================================================================================**/
