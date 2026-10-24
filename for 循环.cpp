#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
using std::cout;
using std::endl;
using std::cin;
int main()
{
		// 模拟F1发车灯倒计时模拟器 (状态题)
	srand(time(0));
	int car_time = rand() % 3000 + 1000;
	for(int Hair = 5; Hair >= 1; Hair--)
	{
		Sleep(car_time);
		cout << "第" << Hair << "红灯亮起" << endl;
	}
	Sleep(car_time);
	cout << "绿灯亮起!比赛开始!" << endl;
	
	
		// WEC 进站策略与轮胎磨损 (逻辑)
	double wear = 0;
	bool hasPitted = false;
	int pit;
	for( int Lap = 0; Lap <= 15; Lap++ , wear += 8)
	{
		cout << "第" << Lap << "圈," << "轮胎已磨损" << wear << "% 是否进站:(1是0否)";
		cin >> pit;
		if(pit == 1)
		{
			wear = -8;
			hasPitted = true;
		}
		if(wear >= 60 && hasPitted == false)
		{
			cout << "警告，轮胎衰竭严重，立即第" << Lap << "圈进站换胎" << endl;
		}
	}
	
		// 换挡模拟 (挑战)
	srand(time(0));
	for(int Cycles = 0; Cycles <= 6; Cycles++)
	{
		int gear = rand() % 8 + 1;
		
		if(gear == 1 || gear == 2)
		{
			cout << "当前" << gear << "档，后轮打滑!,丢失0.3秒" << endl;
		}
		else if(gear > 6)
		{
			cout << "当前" << gear << "档，完美换挡，获得气流速度" << endl; 
		}
		else
		{
			cout << "当前" << gear << "档，平稳的" << endl;
		}
	}
	cout << "最高档，全油门直道" << endl;
	return 0;
}
