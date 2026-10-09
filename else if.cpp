#include <iostream>
#include <string>
#include <windows.h>
int main()
{
	std::string name;
	std::string Rally_car;
	double trey;
	double car_T;
	
	std::cout << "你的名字：";
	std::cin >> name;
	std::cout << "\ncrc全车名字：";
	std::cin >> Rally_car;
	std::cout << "\n你的轮胎磨损倍率：";
	std::cin >> trey;
	std::cout << "\n整车完整度：";
	std::cin >> car_T;

	std::cout << "\n\n正在检查***";
	Sleep(800);
	std::cout << "***";
	Sleep(800);
	std::cout << "***" << std::endl;
	
	std::cout << "车手姓名:" << name << std::endl;
	std::cout << "赛车:" << Rally_car << std::endl;
	std::cout << "工程师给出的忠告:\n";
	
	if(trey > 79)
    {
	    std::cout << "快去更换轮胎";
	}
	else if(car_T > 75)
	{
		std::cout << "这车废了";
	}
	else
    {
		std::cout << "\a 检查完毕，恭喜，保持";
	}
	
	return 0;
}
