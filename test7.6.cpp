/**=================================================================================================
 * @file	test7.6.cpp.
 *
 * Implements the test 7.6 class
 * ��ϰ 7.6�� ���ں��� add�� read �� print, �������Լ��İ汾��
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
