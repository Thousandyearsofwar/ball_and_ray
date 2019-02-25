// ball_and_ray.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<math.h>
using namespace std;
class locate {
private:
	int h1,r1;
	int h2,r2;
	int x1, y1, z1;
	int x2, y2, z2;
	int x3, y3, z3;
public :
	void scanfplace();
	bool test();
};
void locate::scanfplace(){
	cin >>this->h1>>this->r1>> this->x1 >> this->y1 >> this->z1;
	cin>>this->h2>>this->r2>> this->x2 >> this->y2 >> this->z2>>this->x3 >> this->y3 >> this->z3;
}
bool locate::test(){
	if (abs((this->x1 - this->x2)*this->x3 + (this->y1 - this->y2)*this->y3 + (this->z1 - this->z2)*this->z3) / (sqrt(pow(this->x3, 2) + pow(this->y3, 2) + pow(this->z3, 2))) - r2 >= 0)
		return true;
}
int main()
{
	int datanumber;
	cin >> datanumber;
	locate *data = new locate[datanumber];
	for (int i = 0; i < datanumber; i++)
		data[i].scanfplace();
	for (int i = 0; i < datanumber; i++)
		if (data[i].test())
			cout << "yes";
		else
			cout << "no";
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
