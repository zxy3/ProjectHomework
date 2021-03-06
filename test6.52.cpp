/**=================================================================================================
 * @file	test6.52.cpp.
 *
 * Implements the test 6.52 class
 * 练习 6.52: 己知有如下声明,
 * void manip(int, int);
 * double dobj;
 * 请指出下列调用中毎个类型转换的等级 （ 参见 6.6.1 节， 第 219 页）。
 * (a)manip('a'，'z');        类型提升: 字符型实参自动提升成整型
 * (b)manip(55.4, dobj);  算术类型转换: 双精度浮点型自动转换成整型。2个都是double
 *  
 *  书本原话：
 *  1、精确匹配、2、 const 匹配、 3、类型提升匹配、 4、算术类型转换、5、类类型转换
 * 
 *===============================================================================================**/
