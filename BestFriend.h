#include "Friend.cpp"
class BestFriend : public Friend
{
    string PhoneNum;

public:
    void Nhap() override;
    float Time() override;
    static float TimeForBestFriend;
    void set() override;
};
