/**=================================================================================================
 * @file	test5.7.cpp.
 *
 * Implements the test 5.7 class
 * 练习 5.7: 改正下列代码段中的错误。
 * (a)if (ival1!= ival2) 
 * ival2=ival1;
 * else ival1= ival2 = 0;
 * 错误：不能知道ival1和 ival2是什么类型，不能直接赋值0.如果不是int类型的变量就会报错，!=可以用来对比多种类型的变量，不仅仅是int类型。
 * (b)if (ival < minval)
 * minval = ival;
 * occurs = 1;
 * 错误：块要用花括号
 * (c)if (int ival = get_value())
 * cout << "ival=" << ival << endl;
 * if (!ival)
 * cout <<"ival = 0\n";
 * 错误：get_value()返回的数值是否为int类型的值不能确定。
 *           ival不是一个bool类型的变量，不能给出true或者flase的判断。
 * (d) if (ival = 0)
 * ival = get_value();
 * 错误：get_value()返回什么类型的值不能确定
 * ival = 0意思将0赋值给ival，而不是判断ival是不是0，要用==
 *===============================================================================================**/
