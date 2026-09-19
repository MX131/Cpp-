#include <iostream>
#include <string>
#include <windows.h>
int main()
{
	//C语言风格
	char car1[] = "法拉利F1红色马戏团"; //数组类型
	char *car2 = "2025烂新人吉米_安东内利"; //指针类型
	
	//C++风格
	std::string car3 = "中国没有赛车运动！中国人不配";
	std::cout << car1 << std::endl;
	std::cout << car2 << std::endl;
	std::cout << car3 << std::endl;
	Sleep(2000);
	std::cout << "\n可是,我们可以改变***\n" << std::endl;
	Sleep(1234);
	
	//可以改变的？
	//char car1[] = "法拉利F1最佳车队?"; ×××，不可改变
	car2 = "2026超级巨星吉米安东内利";
	car3 = "中国站上了世界级赛车舞台，中国人的赛车运动站了起来！！！！！";
    std::cout << car1 << std::endl;
	std::cout << car2 << std::endl;
	std::cout << car3 << std::endl;
	
	return 0;
}
