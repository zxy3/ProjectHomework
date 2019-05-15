/**=================================================================================================
 * @file	test3.12.cpp.
 *
 * Implements the test 3.12 class
 * 练习 3.12: 下列 vector 对象的定义有不正确的吗？ 如果有， 请指出来。 对于正确的,描述其执行结果； 对于不正确的， 说明其错误的原因。
 * (a) vector<vector<int>> ivec;  合法，创建了一个元素为vector的vector对象
 * (b) vector<string>svec = ivec;  非法，类型不一致
 * (c) vector<string> svec(10, "null"); 合法，十个“null”对象
 * 书：
 * 1、vector<vector<string>> file;  / / 该向量的元素是 vector 对象
 * 2、#include <vector>  using std::vector;
 *===============================================================================================**/
