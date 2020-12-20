#include "card_video.hpp"

#include <iostream>

using namespace std;

CardVideo::CardVideo():
    BaseDetail(),
    videocardtype(undefine),
    speed("1000 РњР“С†"),
    hdmi_input(2),
    max_resolution("1080x720"),
    amount_of_video_memory("2 Р“Р±")
{

}

CardVideo::CardVideo(const BaseDetail::Title l_title,
                     const CardVideo::TVideoCardType l_videocardtype,
                     const std::string l_speed,
                     const int l_hdmi_input,
                     const std::string l_max_resolution,
                     const std::string l_amount_of_video_memory,
                     const std::string l_year_of_manufacture,
                     const bool l_guarantee):
    BaseDetail(l_title, l_year_of_manufacture, l_guarantee),
    videocardtype(l_videocardtype),
    speed(l_speed),
    hdmi_input(l_hdmi_input),
    max_resolution(l_max_resolution),
    amount_of_video_memory(l_amount_of_video_memory)
{

}

CardVideo::CardVideo(const CardVideo &other):
    BaseDetail(other),
    videocardtype(other.videocardtype),
    speed(other.speed),
    hdmi_input(other.hdmi_input),
    max_resolution(other.max_resolution),
    amount_of_video_memory(other.amount_of_video_memory)
{

}

CardVideo::~CardVideo()
{

}

CardVideo &CardVideo::operator=(const CardVideo &other)
{
    if(this==&other)return *this;

    BaseDetail::operator=(other);
    videocardtype = other.videocardtype;
    speed = other.speed;
    hdmi_input = other.hdmi_input;
    max_resolution = other.max_resolution;
    amount_of_video_memory = other.amount_of_video_memory;

    return *this;
}

void CardVideo::setVideoCardType(const CardVideo::TVideoCardType l_videocardtype)
{
    videocardtype = l_videocardtype;
}

CardVideo::TVideoCardType CardVideo::getVideocardType() const
{
    return videocardtype;
}



void CardVideo::setCardSpeed(const std::string l_speed)
{
    speed = l_speed;
}

std::string CardVideo::getCardSpeed() const
{
    return speed;
}



void CardVideo::setHDMI_input(const int l_hdmi_input)
{
    hdmi_input = l_hdmi_input;
}

int CardVideo::getHDMI_input() const
{
    return hdmi_input;
}



void CardVideo::setMaxResolution(const std::string l_max_resolution)
{
    max_resolution = l_max_resolution;
}

std::string CardVideo::getMaxResolution() const
{
    return max_resolution;
}



void CardVideo::setAmountOfVideoMemory(const std::string l_amount_of_video_memory)
{
    amount_of_video_memory = l_amount_of_video_memory;
}

std::string CardVideo::getAmountOfVideoMemory() const
{
    return amount_of_video_memory;
}



void CardVideo::show() const
{
    const char *strVideoCardType[] = {"undefine", "discrete", "build_in", "hybrid", "external"};
    cout << "Название: : " << getTitle().brand << " " << getTitle().model << " " << getTitle().number << "\n"
         << "Тип видеокарты: : " << strVideoCardType[videocardtype] << "\n"
         << "Частота памяти: " << getCardSpeed() << "\n"
         << "HDMI входы: " << getHDMI_input() << "\n"
         << "Максимальное разрешение: " << getMaxResolution() << '\n'
         << "Объем видео памяти: : " << getAmountOfVideoMemory() << "\n"
         << "Год изготовления: " << getYOM() << "\n"
         << "Наличие гарантии: " << getGuarantee() << "\n"
         << endl;
}
















