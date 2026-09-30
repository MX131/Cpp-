#include <iostream>
#include <cstring>
#include <string>
int main()
{
	//常见双目二元运算 计算
	std::cout << "请输入2位二元运算符;==类:" << std::endl;
	double age1;
	double age2;
	std::cin >> age1;
	std::cin >> age2;
	std::cout  << (age1 == age2) << "：结果\n" << std::endl;
	
	std::cout << "请输入2位二元运算符;!=类:" << std::endl;
	double age3;
	double age4;
	std::cin >> age3;
	std::cin >> age4;
	std::cout  << (age3 != age4) << "：结果\n" << std::endl;
	
	std::cout << "请输入2位二元运算符;<类:" << std::endl;
	double age5;
	double age6;
	std::cin >> age5;
	std::cin >> age6;
	std::cout  << (age5 < age6) << "：结果\n" << std::endl;
	
	std::cout << "请输入2位二元运算符;>类:" << std::endl;
	double age7;
	double age8;
	std::cin >> age7;
	std::cin >> age8;
	std::cout  << (age7 > age8) << "：结果\n" << std::endl;
	
	std::cout << "请输入2位二元运算符;<=类:" << std::endl;
	double age9;
	double age10;
	std::cin >> age9;
	std::cin >> age10;
	std::cout  << (age9 <= age10) << "：结果\n" << std::endl;
	
	std::cout << "请输入2位二元运算符;>=类:" << std::endl;
	double age11;
	double age12;
	std::cin >> age11;
	std::cin >> age12;
	std::cout  << (age11 >= age12) << "：结果\n\n" << std::endl;
	//********* ********//
	
    //C语言风格的比较
	//注意C是比较内存地址，并非比较表层大小
	//但是C和C++一起比较就会重组，就是表层大小了（比较各个ACSII）
	
	char a1[] = "带全家福堵桥去不"; //1个中文字符 = 3个字节
	char *a2 = "NO I no";
	int CD = strcmp(a1,a2); //加上strcmp 就可以比较内容大小了.
    std::cout << "a1 和 a2 的内容大小比较：" << CD << std::endl;
	
	// C++ 类型比较
	std::string b1 = "忘情牛肉面";
	std::string b2 = "deepseek与豆包的终极KO";
	bool CD2 = b1 == b2;
	std::cout << "b1 和 b2 是否等同于：" << CD2 << std::endl;

	
	return 0;
}
