#include <iostream>
using std::cout;
using std::endl;
using std::cin;
int main()
{
	int slave;
	while(1)
	{
	cout << "请输入要分析多少个学生:";
	cin >> slave;
	if(slave <= 0)
	{
		cout << "错误，请重新执行" << endl;
	}
		else
		{
		break;	
		}
	}
	int roll[999]; //本来这里是slave，但编译器（IDE） 不准许, 只能那个常量惦记;
	for(int dog = 0;dog < slave; dog++)
	{
		cout << "请输入学生" << dog + 1 << "号的成绩:";
		cin >> roll[dog];
	}
	
	return 0;
}
