/*
	상속관계에서 이니셜라이즈 사용하기
*/
#include <iostream>
using namespace std;

class Car
{
private:
	int gasolinGauge;
public:
	Car(int ag) : gasolinGauge(ag) {}	// 콜론 초기화
	int getGasGauge() { return gasolinGauge; }
};
class HybridCar : public Car
{
private:
	int electricGague;
public:
	HybridCar(int ag, int ae) : Car(ag), electricGague(ae) {}
	int getElecGauge() { return electricGague; }
};
class HybridWaterCar : public HybridCar
{
private:
	int waterGauge;
public:
	HybridWaterCar(int ag, int ae, int aw) : HybridCar(ag, ae), waterGauge(aw) {}
	//int getWaterGague() { return waterGauge; }
	void showGauge()
	{
		cout << "잔여 가솔린: " << getGasGauge() << endl;
		cout << "잔여 전기량: " << getElecGauge() << endl;
		cout << "잔여 수소량: " << waterGauge << endl;
	}
};


int main()
{
	HybridWaterCar hwc(10, 20, 30);
	hwc.showGauge();

	return 0;
}