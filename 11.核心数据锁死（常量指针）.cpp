/* 🚨 第三题：核心数据锁死（双const）

背景：你写了一个函数，用于读取赛车的“最高转速限制（红线区）”。这个数据不仅不能被修改，而且这个指针不能指向其他地方（保证绝对安全）。

要求：

1. 定义变量 int maxRpm = 8500;
2. 定义一个双 const 指针 p，指向 maxRpm。
3. 尝试用代码打印出这个值。
4. 在注释里写出来：如果你试图让 p 指向另一个变量，编译器会报错吗？为什么？*/
#include <iostream>
int main()
{
	int maxRpm = 8500;
	const int *  const p = &maxRpm;
	std::cout << *p << " ";
	std::cout << "答：绝会；因为双指向不可以修改或指向任何数据。" << std::endl;
	return 0;
}
