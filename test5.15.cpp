/**=================================================================================================
 * @file	test5.15.cpp.
 *
 * Implements the test 5.15 class
 * 练习 5.15: 说明下列循环的含义并改正其中的错误。
 * (a)for (int ix = 0; ix != sz; ++ix) { /... / }
 * if (ix != sz)
 * // ...
 * 错误;ix != sz这个条件为真，在循环里面就已经保证了。
 * (b)int ix;
 * for (ix != sz; ++ix) { /.../ }
 * 错误：循环条件不完整，少一个分号
 * (c)for (int ix = 0; ix != sz; ++ix, ++ sz) { /..../ }
 * 错误：2个变量同时增加，这个条件用不可能完成。
 *===============================================================================================**/
