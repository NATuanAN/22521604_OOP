#include "BestFriend.h"
// Phần BestFriend
void BestFriend::Nhap()
{
    Friend::Nhap();
    getline(cin, PhoneNum);
}
float BestFriend::Time()
{
    return 5;
}

float BestFriend::TimeForBestFriend = 0;
void BestFriend::set()
{
    cout << "Ten: " << name << ", tuoi: " << age << ", so dien thoai: " << PhoneNum;
}