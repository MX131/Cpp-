#include <iostream>
int main()
{
unsigned short bits = 2;
	std::cout << "咱们先看看short的占用字节：" <<  sizeof(bits) << std::endl;
 bits =bits*8;
//	******     ***
//	     *    *   *
//	     *    *   *
//	     *     * *
// 	     *    *   *
//	     *    *   *
//       *	   * *
	std::cout << "好的，利用电脑二进制的公式2^n-1可以得出它的范围，先算(字节*8)得出：" << bits;
	std::cout << "比特" << std::endl;
	bits=(2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2)-1;
	std::cout << "接下来再套公式就可以得出范围0~" << bits << std::endl;
	bits+=1;
	std::cout <<"这时候再加1可得:" << bits << std::endl;
	
	return 0;
}
