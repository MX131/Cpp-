/*动态圈速分析（逻辑与遍历）
背景:你跑了5圈，但事先不知道要跑几圈，所以用动态数组来存。
要求:
1. 用 new 申请一个长度为 5 的 int 数组。
2. 用 for 循环，给这5个元素赋值（比如：145, 142, 140, 138, 139）。// 我不要按照这个，实战中这样写我不就是吃多了撑的吗?
	3. 用指针（注意是指针运算，不要用数组下标 []）遍历这个数组，把这5个圈速打印出来。
	4. 算出这5圈的“总时间”和“平均圈速”并打印。
	5. 最后，用最安全的方式释放这块内存。 */	
#include <iostream>
int main()
{
	int *a1 = new int[5]{145,142,140,138,139};
	for(int i = 0; i < 5; i++)
	{
		std::cout << "数:" << *(a1 + i) << std::endl;
	}
	int sum = 0;
	for(int i1 = 0; i1 < 5; i1++)
	{	
		sum += *(a1 + i1);
	}
	long double dvg = sum/5.0;
	std::cout << "总时间:" << sum << std::endl;
	std::cout << "平均圈速:" << dvg << std::endl;
	delete[] a1;
	a1 = nullptr;
	return 0;
}
