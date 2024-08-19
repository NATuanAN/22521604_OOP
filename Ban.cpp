#include "OtherBoy.cpp"

int main()
{

    int n, temp;
    cin >> n;
    Friend **DoiTuongA = new Friend *[n];
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == 1)
        {
            DoiTuongA[i] = new BestFriend;
        }
        if (temp == 2)
        {
            DoiTuongA[i] = new BoyFriend;
        }
        if (temp == 3)
        {
            DoiTuongA[i] = new OtherBoy;
        }
        DoiTuongA[i]->Nhap();
        if (temp == 1)
        {
            BestFriend::TimeForBestFriend += DoiTuongA[i]->Time();
        }
        if (temp == 2)
        {
            BoyFriend::TimeForBoyFriend += DoiTuongA[i]->Time();
        }
        if (temp == 3)
        {
            OtherBoy::TimeForOtherBoy += DoiTuongA[i]->Time();
        }
    }

    OtherBoy::TimeForOtherBoy = OtherBoy::TimeForOtherBoy * 20 / n;
    cout << "Thong Ke: \n";
    cout << "- Thoi gian cho ban than: " << BestFriend::TimeForBestFriend << endl;
    cout << "- Thoi gian cho ban trai: " << BoyFriend::TimeForBoyFriend << endl;
    cout << "- Thoi gian cho ban trai khac: " << OtherBoy::TimeForOtherBoy;

    cout << "\nNguoi ban quan trong nhat: ";
    Friend *t = DoiTuongA[0];
    for (int i = 1; i < n; i++)
    {
        if (DoiTuongA[i]->Time() > t->Time())
            t = DoiTuongA[i];
    }

    t->set();
}