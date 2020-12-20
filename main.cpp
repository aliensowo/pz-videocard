#include <iostream>

#include "card_video.hpp"

using namespace std;

int main()
{
    CardVideo card({"NVIDIA", "RTX", 3090},
                   CardVideo::external,
                   "1400 МГц",
                   2,
                   "1080x720",
                   "2 Gb",
                   "20.01.2020",
                   true);
    card.show();

    CardVideo videocard;
    videocard = card;
    videocard.show();

    return 0;

}
