#include "OtherBoy.h"

void OtherBoy::Nhap()
{
    Friend::Nhap();
    cin >> attractiveness;
}

float OtherBoy::Time()
{
    return attractiveness;
}
float OtherBoy::TimeForOtherBoy = 0;
void OtherBoy::set()
{
    cout << "Ten: " << name << ", tuoi: " << age << ", do thu hut: " << attractiveness;
}