#include <iostream>
int main()
{
	double tire_wear; //轮胎磨损
	double fuel; //剩余燃油
	int weather; //当前天气 1代表晴天 0代表雨天
	int tire_type; //当前轮胎 1代表砂石干 0代表砂石雨
	
	std::cout << "请输入当前轮胎磨损:";
	std::cin >> tire_wear;
	std::cout << "\n请输入当前剩余燃油:";
	std::cin >> fuel;
	std::cout << "\n请输入当前天气（1代表晴天 0代表雨天）:";
	std::cin >> weather;
	std::cout << "\n请输入当前轮胎（1代表砂石软胎 0代表雨天砂石胎）:";
	std::cin >> tire_type;
	
	std::cout << "\n\n好的，车手许文泽赛段过完进站了，准备迎接下一个赛道赛段" << std::endl;
	if(tire_wear > 80 || fuel < 20)
	{
		std::cout << "报告技师，赛车到达临界值，麻烦换胎加油迎接下一个赛段" << std::endl; 
	}	
    else if((weather == 0 && tire_type == 1) || (weather == 1 && tire_type == 0))
	{
	    std::cout << "机械师，工程师，技师快点更换轮胎，轮胎和天气不匹配" << std::endl;
	}
	else 
    {
		std::cout << "车辆良好，准备下一个赛段！" << std::endl;
	}
	
	return 0;	
}
