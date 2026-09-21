#include <iostream>
#include <string>
int main()
{
	std::string neam = "许文泽";
    std::string jog = "物理（物质理论）";
	std::string ye = "赛车，机械";
	int age = 14;
	double height = 157.11;
	//使用字符串拼接与to_string
	std::string wenze = "我的名字是" + neam + "，我最喜欢的科目是" + jog + "，我的爱好是" + ye + "；我的年龄和身高分别是：" + std::to_string(age) + "和" + std::to_string(height);
	//开始打印
	std::cout << wenze << std::endl;

	
	return 0;
}
