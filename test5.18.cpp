/**=================================================================================================
 * @file	test5.18.cpp.
 *
 * Implements the test 5.18 class
 * 练习 5.18： 说明下列循环的含义并改正其中的错误。
 * (a)do  int v1, v2;
 * cout << "Please enter two numbers to sum:" ;
 * if (cin >> v1>> v2)
 * cout<< "Sum is: " << v1+ v2 << endl;
 * while (cin);
 * 错误：while (cin)如果输入会一直执行下去，可以在do里面设置如果结束输入，然后结束循环。
 * (b)do {
 * // ...
 * } while (int ival = get_response());
 * 错误：int ival = get_response()这个条件，如果get_response()返回为Int类型的变量，则永远为真。
 * (c)do {
 * int ival = get_response();
 * } while (iva1);
 * 错误：iva1是一个int类型的变量，如何判断true或false
 *===============================================================================================**/
