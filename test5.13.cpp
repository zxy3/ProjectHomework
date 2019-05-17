/**=================================================================================================
 * @file	test5.13.cpp.
 *
 * Implements the test 5.13 class
 * 练习 5.13: 下面显示的每个程序都含有一个常见的编程错误， 指出错误在哪里， 然后修改它们。
 * (a)unsigned aCnt=0, eCnt = 0, iouCnt = 0;
 * char ch = next_text();
 * switch (ch) {
 * case ' a': aCnt++;
 * case  'e': eCnt++；
 * default: iouCnt++;}
 * 错误：case内部缺少break语句;
 * (b)unsigned index =some value();
 * switch (index) {
 * case 1:
 * int ix = get_value();
 * ivec[ ix ] index;
 * break;
 * default:
 * ix = ivec.size()-1;
 * ivec[ ix ] = i n d e x;
 * }
 * 错误：case内部定义要加花括号
 * (c)unsigned evenCnt = 0, oddCnt=0;
 * int digit = get_num() % 10;
 * switch (digit) {
 * case 1, 3, 5 , 7, 9:
 * oddcnt++;
 * break;
 * case 2, 4, 6, 8, 10:
 * evencnt++;
 * break;
 * 错误：多条case进行同一处理错误，正确格式：case 1 ： case 2： case : 3：{处理语句}
 * (d)unsigned ival=512, jval=1024, kval=4096;
 * unsigned bufsize;
 * unsigned swt = get_bufCnt( > ;switch(swt) {
 * case ival:
 * bufsize = ival * sizeof(int);
 * break;
 * case jval:
 * bufsize = jval * sizeof(int);
 * break;
 * case  kval:
 * bufsize = kval * sizeof(int);
 * break;}
 * 错误：case 标签必须是整形常量表达式
 * unsigned ival=512, jval=1024, kval=4096;unsigned bufsize;的定义均为变量，不能用于case标签。
 *===============================================================================================**/
