/*车库的钥匙（基础防雷）
背景：你要在堆区分别申请一个“单个圈速”和一个“包含5个圈速的数组”。
要求：
1. 用 new 申请一个 int，赋值为 135，打印出来。
2. 用 new 申请一个大小为 5 的 int 数组，不用赋值。
3. 分别用正确的 delete 语法释放它们。
4. 释放完之后，把这两个指针都置为 nullptr，防止变成野指针。*/
#include <iostream>
int main()
{
	int *a1 = new int(135);
	int *B1 = new int[5];
	std::cout << "单个圈速:" << *a1 << std::endl;
	delete a1;
	delete[] B1;
	a1 = nullptr;
	B1 = nullptr;
	return 0;
}
