#include <iostream>
#include <string>
#include <windows.h>
int main()
{
	// 输入阶段(赛道：宁波国际赛车场，4.01 km 长)
	std::cout << "\t*****FIA数据报告 - 2026末赛季*****" << std::endl;
	
	std::string name;
	std::cout << "车手姓名:";
	std::cin >> name;
	
	int car_F;
	std::cout << "车手车号:";
	std::cin >> car_F;
	
	double ningbo;
	std::cout << "赛道长度(单位是km，您不需输入):";
	std::cin >> ningbo; 
	
	double length;
	std::cout << "车手一圈所用时间:";
	std::cin >> length;
	std::cout << "正在查看回访并打印中*";
	Sleep(500);
	std::cout << "*-*";
	Sleep(500);
	std::cout << "*-*";
	Sleep(500);
	std::cout << "*-*";
	Sleep(500);
	std::cout << "*-*";
	Sleep(500);
	std::cout << "*-*";
	Sleep(500);
	std::cout << "*-*";
	Sleep(500);
	std::cout << "*-*\n\n";
	
	//计算阶段
	int Q1 = 5;
	int Q2 = Q1 + 3;
	double Z1 = 4.01*Q2;
	double Z2 = length*Q2;
	int Z3 = Z1/(Z2/3600);
	int Z4 = Q2 % 3;
	bool isDNF = false;
	
	std::cout << "原本圈数:" << Q1 << std::endl;
	std::cout << "冲刺后总圈数：" << Q2 << std::endl;
	std::cout << "总里程:" << Z1 << "km" << std::endl;
	std::cout << "总用时时间:" << Z2 << "s" << std::endl;
	std::cout << "平均时速:" << Z3 << "km/h" << std::endl;
	std::cout << "回放里车手每3圈进站一次，进多少次:" << Z4 << std::endl;
	std::cout << "是否完赛(0=是，1=否):" << isDNF << std::endl; 

	
	return 0;
}
