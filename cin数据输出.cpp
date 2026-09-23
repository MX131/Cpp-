#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;
int main()
{
	string cout_name;
	cout << "请输入你的名字：" << endl;
    std::cin >> cout_name;
	
	int cout_SFZ;
	cout << "请输入身份证号前4位：" << endl;
	std::cin >> cout_SFZ;
	
	double cout_long;
	cout << "请输入身高：" << endl;
	std::cin >> cout_long;
	
	int cout_age;
	cout << "请输入年龄：" << endl;
	std::cin >> cout_age;
	
	string cout_IP;
	cout << "请输入您设备全称：" << endl;
	std::cin >> cout_IP;
	
 	cout << "\n\n您的名字：" << cout_name << endl;
	cout << "您的身份证号：" << cout_SFZ << endl;
	cout << "您的身高：" << cout_long << endl;
	cout << "您的年纪：" << cout_age << endl;
	cout << "您的设备：" << cout_IP << endl;

	
	return 0;
}
