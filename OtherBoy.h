#include "BoyFriend.cpp"
class OtherBoy : public Friend
{
    float attractiveness;

public:
    static float TimeForOtherBoy;
    void Nhap() override;
    float Time() override;
    void set() override;
};
