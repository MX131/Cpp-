#include <iostream>
using std::cout;
using std::endl;
using std::cin;
int main()
{
	int Chejin = 9000000;
	double A1;
	double A2;
	double Bonus_A;
	double Bonus_B;
	while(1)
	{
		cout << "请输入车手A,B积分:";
		cin >> A1 >> A2;
		if(A1 < 3)
		{
			cout << "78的这个赛季干嘛去了，这么点积分，想啥呢，没工资!!!" << endl;
			continue;
		}
			if(A2 < 3)
			{
				cout << "要个蛋的" << endl;
				continue;
			}
		Bonus_A = A1*100000;
		Bonus_B = A2*100000;
		cout << "车手A1 可获得" << Bonus_A << "RMB\n";
		cout << "车手A2 可得" << Bonus_B << "RMB\n";
		Chejin -= Bonus_B + Bonus_A;
		if(Chejin > 9000000)
		{
			cout << "抱歉，车队没钱了" << endl;
			break;
		}
		break;
	}
	
	return 0;
}
