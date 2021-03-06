/**=================================================================================================
 * @file	test4.25.cpp.
 *
 * Implements the test 4.25 class
 * 练习 4.25:如果一台机器上 int 占 32 位，char占 8位, 用的是latin-1字符集，其中字符'q'的二进制形式是 01110001
 * 那么表达式 位、'q '<<6 的值是什么？
 *  
 *  >> 右移 ：对象是无符号数，左侧插入值为0的二进制位 ； 对象是有符号数，左侧插入符号位的副本或0，视情况而定。
 *  << 左移 ：右侧插入值为0的二进制位(箭头指向那边，就往哪运动)
 *  ~ 位求反：注意题目要求，最后问的是“值”而不是字符了。所以应该由8位转向32位
 *  最后的结果为：1111 1111 1111 1111 1110 0011 1000 0000   值为：-7296
 *===============================================================================================**/
