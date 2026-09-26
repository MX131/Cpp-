#include <iostream>
#include <windows.h>
int main()
{
	std::cout << "\t简易加法（二元）计算" << std::endl;
	std::cout << "请输入第一位：";
	double age;
	std::cin >> age;
	
	std::cout << "请输入第二位：";
	long double age2;
	std::cin >> age2;

	std::cout << "正在计算*-*";
	Sleep(500);
	std::cout << "*-*";
	Sleep(500);
	std::cout << "*-*";
	Sleep(500);
	std::cout << "*-*";
	Sleep(500);
	std::cout << "*-*";
	age+=age2;
	std::cout << "答案：" << age << std::endl;
	
	//******************/
	
	std::cout << "\t简易乘法（二元）计算" << std::endl;
	std::cout << "请输入第一位：";
	double age3;
	std::cin >> age3;
	
	std::cout << "请输入第二位：";
	long double age4;
	std::cin >> age4;
	
	std::cout << "正在计算*-*";
	Sleep(500);
	std::cout << "*-*";
	Sleep(500);
	std::cout << "*-*";
	Sleep(500);
	std::cout << "*-*";
	Sleep(500);
	std::cout << "*-*";
	age3*=age4;
	std::cout << "答案：" << age3 << std::endl;
	
	//*****************/
	
	std::cout << "\t简易/法（二元）计算" << std::endl;
	std::cout << "请输入第一位：";
	double age5;
	std::cin >> age5;
	
	std::cout << "请输入第二位：";
	long double age6;
	std::cin >> age6;
	
	std::cout << "正在计算*-*";
	Sleep(500);
	std::cout << "*-*";
	Sleep(500);
	std::cout << "*-*";
	Sleep(500);
	std::cout << "*-*";
	Sleep(500);
	std::cout << "*-*";
	age5/=age6;
	std::cout << "答案：" << age5 << std::endl;

	
	return 0;
}
