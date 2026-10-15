#include <iostream>
int main()
{
	int pit_GO;
	std::cout << "车手怀柔赛段1完成，目前已回到维修区，请输入技师工程师要做的事情：\n";
	std::cout << "1.更换软砂石胎\n2.更换雨砂石胎\n3.加油枪\n4.修理检查\n";
	std::cin >> pit_GO;

	switch(pit_GO)
	{
	case 1:
		std::cout << "机械师：已换上软胎，准备下一个赛段" << std::endl;
		break;
	case 2:
		std::cout << "机械师：已换上湿砂胎，注意滑移！" << std::endl;
		break;
	case 3:
		std::cout << "机械师：已经加满，注意下一赛段消耗" << std::endl;
		break;
	case 4:
		std::cout << "机械师：检查完毕，受损部位修理" << std::endl;
		break;
	default:
		std::cout << "技师/车手：啥？？？" << std::endl;
		break;
	}

	return 0;
}
