/**=================================================================================================
 * @file	test7.6.cpp.
 *
 * Implements the test 7.6 class
 * 练习 7.6： 对于函数 add、 read 和 print, 定义你自己的版本。
 *===============================================================================================**/
Sales_data add(const Sales_data& lhs, const Sales_data& rhs) {
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}
std::istream& read(std::istream& is, Sales data& item) {
	is >> item.bookNo >> item.units_sold >> item.sellingprice>> item.saleprice;
	return is;
}
std::ostream& print(std:rostream & os, const Sales_data& item) {
	os << item, isbn() << " " << item.units_sold << " " << item.Sellingprice << " " << item.saleprice << " " << item.discount;
	return os;
}
