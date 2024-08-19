#include "BestFriend.cpp"
class BoyFriend : public Friend
{
    int income;

public:
    void Nhap() override;
    float Time() override;
    static float TimeForBoyFriend;
    void set() override;
};
