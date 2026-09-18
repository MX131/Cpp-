#include <iostream>
#include <windows.h>
#include <string>
#define name "wenze xu"

using std::cout;    //  
using std::endl;    //     偷个懒，别介意
using std::string;  // 

int main()

{
	unsigned int B1 = 78;   //这里已写 整型其中之一，不在下列 表示
	float B2 = 9.1;
	char B3 = 'S';
	string B4 = "xu 某人";
//好的接下来是 数据类型—整型	
	unsigned short A1 = sizeof(short);
	unsigned long A2 = sizeof(long);
	unsigned long long A3 = sizeof(long long);
//好的，开始故事 线
	cout << "有个叫" << name << "的非混的入," << "语文期末考了" << B1 << "分" << endl;
	Sleep(1945);
	cout << "英语考了" << B2 << "分\n";	
	Sleep(1200);
	cout << "物理考了" << B3 << "评分" << endl;
	cout << "它叫做" << B4 << endl;
	
	Sleep(3210);
	cout << "xu 某人回家之后，用C嘎嘎程序测了不同整型数字类型的程序的占用字节：" << "int:" << (B1=sizeof(78)) << "字节" << endl;
	cout << "short:" << A1 << "字节" << endl;
	cout << "long:" << A2 << "字节" << endl;
	cout << "long long(长长整型):" << A3 << "字节" << endl;
	Sleep(6000);
	cout <<"\n随后xu 某人利用2^-1算出了有符号和无符号的范围,先是无符号：" << endl;
	cout << "int=0~" << ((1LL<<(B1*8))-1)<< endl;
	cout << "short=0~" << ((1LL<<(A1*8))-1) << endl;
	cout << "long=0~" << ((1LL<<(A2*8))-1) << endl;
	cout << "long long=0~" << ((~0ULL<<(A3*8))-1) <<endl;
	Sleep(3900);
	cout << "\n 接下来是有符号：" << endl;
	cout << "int=" << -(1LL<<(B1*8-1)) << "~" << ((1LL<<(B1*8-1))-1) << endl;
	cout << "short=" << -(1LL<<(A1*8-1)) << "~" << ((1LL<<(A1*8-1))-1) << endl;
	cout << "long=" << -(1LL<<(A2*8-1)) << "~" << ((1LL<<(A2*8-1))-1) << endl;
	cout << "long long=" << -(1LL<<(A3*8-1)) << "~" << ((1LL<<(A3*8-1))-1) << endl;
	
	return 0;   //完毕，结束
}
