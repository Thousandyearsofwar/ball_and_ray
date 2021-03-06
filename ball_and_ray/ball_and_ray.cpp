#include <iostream>
#include<math.h>
using namespace std;
class locate {
private:
	float h1, r1;
	float h2, r2;
	float x1, y1, z1;
	float x2, y2, z2;
	float x3, y3, z3;
public:
	void scanfplace();
	bool test();
};
void locate::scanfplace() {
	scanf_s("%f%f%f%f%f", &this->h1, &this->r1, &this->x1, &this->y1, &this->z1);
	scanf_s("%f%f%f%f%f%f%f%f", &this->h2, &this->r2, &this->x2, &this->y2, &this->z2, &this->x3, &this->y3, &this->z3);
}
bool locate::test() {
	float i = ((this->y2 - this->y1)*this->z3) - (((this->z2 + this->h2*0.9 - r2) - (this->z1 + this->h1 - this->r1))*this->y3);
	float j = (((this->z2 + this->h2*0.9 - r2) - (this->z1 + this->h1 - this->r1))*this->x3) - ((this->x2 - this->x1)*this->z3);
	float k = ((this->x2 - this->x1)*this->y3) - ((this->y2 - this->y1)*this->x3);
	float temp = abs(sqrt(pow(i, 2) + pow(j, 2) + pow(k, 2))) / (sqrt(pow(this->x3, 2) + pow(this->y3, 2) + pow(this->z3, 2))) - r2;
	if (x3 == 0 && y3 == 0 && z3 == 0)
		return false;
	if (temp <= 0)
		return true;
	else
		return false;
}
int main()
{
	int datanumber;
	cin >> datanumber;
		locate *data = new locate[datanumber];
		for (int i = 0; i < datanumber; i++)
			data[i].scanfplace();
		for (int i = 0; i < datanumber; i++) {
				if (data[i].test())
					cout << "YES" << endl;
				else
					cout << "NO" << endl;
		}
}