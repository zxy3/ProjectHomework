////分析程序是否合理
//#include<iostream>
//int main() {
//	std::cout << "打印以下2个数字的和" << std::endl;
//	int v1, v2;
//	std::cin >> v1;
//	std::cin >> v2;
//	//std::cout << v1 << "*" << v2 << "=" << v1 * v2 << std::endl;
//	std::cout << "the sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
//	//通过运行得到运算结果正确的，但是运算是不合法的，因为：<<运算符接受两个运算对象，
//	//左侧的运算对象必须是一个 ostream对象， 右侧的运算对象是要打印的值。
//	std::cout << "the sum of " << v1;
//	std::cout << " and " << v2;
//	std::cout << " is "<< v1 + v2 << std::endl;
//	return 0;
//}