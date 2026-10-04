#include <iostream>
#include <string>
int main()
{
	std::cout << "请输入你的轮胎磨损：";
	double tre;
	std::cin >> tre;
	std::string Box = (tre > 80)? "\nBox Box,立即驶入进站窗口！" : "持续推进!";
	std::cout << Box << std::endl;

	return 0;
}
