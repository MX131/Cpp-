/*### **题目：插队上车**

校运会开幕式，n 名同学排成一列准备入场，从左到右编号为 0 到 n−1，每个人身上贴着一个班级号。这时教练临时叫来一名新同学，要求把新同学安排到第 p 号位置上；原来第 p 号以及它后面的同学，整体往后挪一位。

请你输出插入之后的队列。

**输入格式**

第一行一个整数 `n`（1 ≤ n ≤ 100）

第二行 `n` 个整数，表示原队列，从左到右

第三行两个整数 `p` 和 `x`，表示插入的位置 p，以及新同学的编号 x（0 ≤ p ≤ n）

**输出格式**

输出一行，共 `n + 1` 个整数，用空格分隔。**行末不要有多余空格。**

**样例输入**

```
6
3 1 4 1 5 9
4 2
```

**样例输出**

```
3 1 4 1 2 5 9*/
#include <iostream>
int main()
{
	int *T = new int[6]{3,1,4,1,5,9}; //2号来了，插到1和5间;
	int *new_T = new int[7];
	int offsetof = 0;
	for(int i = 0; i < 7; i++)
	{
		if(i == 4)
		{
			new_T[i] = 2;
			offsetof++;
			continue;
		}
		new_T[i] = T[i - offsetof];
	}
	for(int n = 0; n < 7; n++)
	{
		std::cout << new_T[n] << " ";
	}
	delete[] T;
	delete[] new_T;
	T = nullptr;
	new_T = nullptr;
	
	return 0;
}
