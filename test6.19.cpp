/**=================================================================================================
 * @file	test6.19.cpp.
 *
 * Implements the test 6.19 class
 * 练习 6.19: 假定有如下声明， 判断哪个调用合法、 哪个调用不合法。 对于不合法的函数调用， 说明原因。
 * double calc(double);
 * int count(const string &, char);
 * int sum(vector<int>::iterator, vector<int>::iterator, int);
 * vector<int> vec(10);
 * (a)calc(23.4, 55.1);
 * (c)calc ( 66 );
 * (b)count("abcda", r ar );
 * (d)sum(vec.begin(), vec.end(), 3.8);
 *   
 *   (a)：函数只有一个参数，传入两个不合法
 *   (b)：合法
 *   (c)：合法
 *   (d)：合法
 *===============================================================================================**/
