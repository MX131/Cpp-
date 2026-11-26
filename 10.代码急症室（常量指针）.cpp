/*🏎️ 第一题：代码急诊室（找报错）

下面这段代码里，有几行会当场编译报错？为什么？（考验你对“左定值右定向”的掌握）

```cpp
int main() {
int a = 10;
int b = 20;

// 1. 指向常量的指针（左定值）
const int *p1 = &a;
*p1 = 30;       // A行
p1 = &b;        // B行

// 2. 指针常量（右定向）
int * const p2 = &a;
*p2 = 40;       // C行
p2 = &b;        // D行

// 3. 双const（全锁死）
const int * const p3 = &a;
*p3 = 50;       // E行
p3 = &b;        // F行

return 0;
} */
#include <iostream>
int main()
{
	std::cout << "答: 4行；\n因为1是指向常量的指针，只可以改指向，不可以改数据；\n2是指针常量，只能改数据，不可以改指向；\n3是双指向，不可以改任何数据指向." << std::endl;
	return 0;
}
