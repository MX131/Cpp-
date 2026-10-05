#include <iostream>
int main()
{
	long long Money = 100000000;
	std::cout << "来自中国汽车拉力锦标赛官方消息:\n领克03 GT 车队，赛季末奖金:" << Money << std::endl;
	std::cout << "\n哇！老板，两位车手都取得了不错的积分，这次奖金得到了1亿RMB" << std::endl;
	std::cout << "老板！接下来您选择：\n1.车辆性能升级（4000万)\n2.车队设施升级（2500万)\n3.人员合同升级（2000万)\n4.商业与赞助（1500万）" << std::endl;
	int Expense;
	std::cin >> Expense;
	
	if(Expense == 1) //判断
	{
		Money -= 40000000; // 执行
		
		if(Expense == 2)
		{
			Money -= 25000000;
			
			if(Expense == 3)
			{
		    Money -= 20000000;
				
				if(Expense == 4)
				{	
				Money -= 15000000;
					
				}
			}
		}
	}
	std::cout << "您的预算剩余：" << Money;
	
	
    return 0;
}
