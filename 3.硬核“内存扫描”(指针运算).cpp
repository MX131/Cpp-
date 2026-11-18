// 背景：你以后搞网安、挖漏洞，最需要懂的就是这个。
// 要求：
// 1. 定义一个 double 类型的数组：double physics[] = {1.5, 2.5, 3.5};。
// 2. 定义一个 double *dp = physics;。
// 3. 打印出 dp、dp + 1、dp + 2 的内存地址。
// 4. 打印出 *(dp)、*(dp + 1)、*(dp + 2) 的值。
// 5. 回答我：dp + 1 和 dp 的地址相差了几个字节？为什么？
#include <iostream>
int main()
{
	double physics[]{1.5, 2.5, 3.5};
	double *dp = physics;
	std::cout << "dp,dp+1,dp+2的内存地址\n" << dp << "\n" << dp + 1 << "\n" << dp + 2 << std::endl;
	std::cout << "*(dp),*(dp+1),*(dp+2)值\n" << *(dp) << "\n" << *(dp + 1) << "\n" << *(dp + 2) << std::endl;
	std::cout << "dp+1和dp的地址相差8个，因为double每个占用字节64bit,即8Byte" << std::endl;
	return 0;
}
