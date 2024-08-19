#include "BoyFriend.h"
// Phần BoyFriend

void BoyFriend::Nhap()
{
    Friend::Nhap();
    cin >> income;
}

float BoyFriend::Time()
{
    return 5 * income / 10000000;
}
float BoyFriend::TimeForBoyFriend = 0;
void BoyFriend::set()
{
    cout << "Ten: " << name << ", tuoi: " << age << ", thu nhap: " << income << "d";
}