/*
	��Ӱ��迡�� �̴ϼȶ����� ����ϱ�
*/
#include <iostream>
using namespace std;

class Car
{
private:
	int gasolinGauge;
public:
	Car(int ag) : gasolinGauge(ag) {}	// �ݷ� �ʱ�ȭ
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
		cout << "�ܿ� ���ָ�: " << getGasGauge() << endl;
		cout << "�ܿ� ���ⷮ: " << getElecGauge() << endl;
		cout << "�ܿ� ���ҷ�: " << waterGauge << endl;
	}
};


int main()
{
	HybridWaterCar hwc(10, 20, 30);
	hwc.showGauge();

	return 0;
}