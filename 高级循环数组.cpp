/*【任务背景】
你在模拟器里测试了几台赛车在斯帕赛道大直道末端的极速（单位：km/h），数据如下：
int speeds[] = {280, 310, 295, 340, 320, 250};
【任务要求】

1. 用 sizeof 自动计算出数组里有几台赛车，并输出总数。
2. 使用刚刚学的高级 for 循环（冒号那种），把这6台车的速度挨个遍历一遍。
3. 在循环里加一个 if 判断：如果这台车的速度大于 300，就输出：这辆车超速了，速度是：XXX（XXX是具体速度）。
4. 附加挑战（选做）：用你之前学过的思路，搞一个“存钱罐”变量（比如 sum），把这6台车的速度全部加起来，最后算个平均速度输出来。
*/
#include <iostream>
int main()
{	
	int e = 1;
	int speeds[6] = {280,310,295,340,320,250};
	int car_s = sizeof(speeds) / sizeof(speeds[0]);
	long double sum = 0;	
	std::cout << "测速器算出了有:" << car_s << "车辆." << std::endl; // 总字节/单字节数
	for(int i : speeds)
	{
		std::cout << "第" << e << "台赛车:" << i << std::endl;
		sum += i;
		if(i > 300)
		{
			std::cout << i << "km/h的赛车好快，摄像机和测速仪红了!!!" << std::endl;
		}
		e++;
	}
	std::cout << "所有车的平均速度物理:" << sum/car_s;
	
	return 0;
}



