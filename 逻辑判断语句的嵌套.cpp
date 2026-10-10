#include <iostream>
int main()
{
	int car_Rally;
	int Rally_1;
	int Rally_2;
	std::cout << "请输入你的执照crc级别\n1.1级别 2.2级别";
	std::cin >> car_Rally;
	
	std::cout << "\n\n太好了,终于得到了中国汽车拉力锦标赛" << car_Rally << "级别执照，现在有几个车队可以选择:" << std::endl;
	
	if(car_Rally == 1)
	{
		std::cout << "\n可选择车队:\n1.领克03 GT车队 2.TEAM PEGASUS星速车队" << std::endl;
        std::cin >> Rally_1;
	
	if(Rally_1 == 1)
	{
		std::cout << "\n恭喜进入领克03 GT China Rally Championship 车队" << std::endl;
		std::cout << "车队信息:中国汽车拉力锦标赛（CRC）的明星车队\n主力车型领克03 TCR\n拥有强大的厂商支持与专业的拉力调校\n车队致力于培养年轻车手\n是分站冠军的有力争夺者\n" << std::endl;
	}	
	
	if(Rally_1 == 2)
	{
		std::cout << "\n恭喜进入TEAM PEGASUS星速车队 China Rally Championship 车队" << std::endl;
		std::cout << "车队信息:CRC传统豪门\n多次斩获年度冠军\n主力战车丰田GR Yaris Rally2\n以严谨的赛车工程、极致的底盘调校和丰富的大赛经验著称\n是赛场上公认的速度标杆\n" << std::endl;
	}
}
	
	else if(car_Rally == 2)
	{
		std::cout << "\n可选择车队:\n1.浙江同联拉力车队 2.东盛泰德拉力车队" << std::endl;
		std::cin >> Rally_2;
		
	if(Rally_2 == 1)
		{
			std::cout << "\n恭喜进入浙江同联拉力车 China Rally Championship 车队" << std::endl;
			std::cout << "车队信息:一支极具潜力的中国本土拉力劲旅\n常年征战CRC赛场\n车队以扎实的稳定性、出色的团队协作和优秀的后勤保障著称\n致力于挖掘和培养国内新一代拉力车手\n" << std::endl;
		}	
		
		else if(Rally_2 == 2)
		{
			std::cout << "\n恭喜进入东盛泰德拉力车 China Rally Championship 车队" << std::endl;
			std::cout << "车队信息:CRC赛场上的实力派老牌俱乐部车队\n拥有丰富的大赛经验\n车队在赛车改装与底盘调校方面底蕴深厚\n车手阵容经验丰富，尤其擅长在复杂多变的柏油与砂石混合赛道上作战。" << std::endl;
		}
	}

	return 0;
}
