/**=================================================================================================
 * @file	test5.13.cpp.
 *
 * Implements the test 5.13 class
 * ��ϰ 5.13: ������ʾ��ÿ�����򶼺���һ�������ı�̴��� ָ����������� Ȼ���޸����ǡ�
 * (a)unsigned aCnt=0, eCnt = 0, iouCnt = 0;
 * char ch = next_text();
 * switch (ch) {
 * case ' a': aCnt++;
 * case  'e': eCnt++��
 * default: iouCnt++;}
 * ȱ��break;
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
 * ixӦ���ⲿ��������
 * (c)unsigned evenCnt = 0, oddCnt=0;
 * int digit = get_num() % 10;
 * switch (digit) {
 * case 1, 3, 5 , 7, 9:
 * oddcnt++;
 * break;
 * case 2, 4, 6, 8, 10:
 * evencnt++;
 * break;
 * �����ö��ż��Ա�ʾ����case 1 �� case 2�� case : 3....
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
 * case ������Ҫ�ӵ�������ֵ���������Լ�const���η�����ival��jval��kval��ɡ�������
 *===============================================================================================**/
