#include <iostream>
#include "windows.h"

#include "card_video.hpp"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    CardVideo card1({"NVIDIA", "RTX", 3090},
                   CardVideo::external,
                   "1400 ���",
                   2,
                   "1080x720",
                   "8 ��",
                   "20.01.2020",
                   true);
    cout << "������ ��������� ������" << endl;
    card1.show();

    CardVideo card2;
    card2 = card1;
    cout << "������ ��������� ������ ��������� ������������� ������� �������" << endl;
    card2.show();

    CardVideo card3({"AMD", "Radeon", 570},
                    CardVideo::discrete,
                    "900 ���",
                    1,
                    "720x480",
                    "512 ��",
                    "15.03.2004",
                    false);
    cout << "������ ��������� ������" << endl;
    card3.show();

    card3.setHDMI_input(5);
    cout << "������ ��������� ������ ����� ��������� ���������� HDMI ������" << endl;
    card3.show();


    return 0;

}
