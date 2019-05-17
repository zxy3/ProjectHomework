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
 * 缺少break;
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
 * ix应在外部声明定义
 * (c)unsigned evenCnt = 0, oddCnt=0;
 * int digit = get_num() % 10;
 * switch (digit) {
 * case 1, 3, 5 , 7, 9:
 * oddcnt++;
 * break;
 * case 2, 4, 6, 8, 10:
 * evencnt++;
 * break;
 * 不能用逗号加以表示包括case 1 ： case 2： case : 3....
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
 * case 后面需要加的是字面值常量，可以加const修饰符，将ival、jval、kval变成”常量“
 *===============================================================================================**/
