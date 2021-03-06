#ifndef CARD_VIDEO_HPP
#define CARD_VIDEO_HPP

#include "card_base.hpp"

class CardVideo: public BaseDetail
{
public:
    enum TVideoCardType {undefine=0, discrete, build_in, hybrid, external};

private:
    TVideoCardType videocardtype;
    std::string speed;
    int hdmi_input;
    std::string max_resolution;
    std::string amount_of_video_memory;

public:
    CardVideo();
    CardVideo(const Title l_title,
              const TVideoCardType l_videocardtype,
              const std::string lspeed,
              const int l_hdmi_input,
              const std::string l_max_resolutoin,
              const std::string l_amount_of_video_memory,
              const std::string l_year_of_manufacture,
              const bool l_guarantee);

    CardVideo ( const CardVideo &other);

    ~CardVideo();

    CardVideo &operator=(const CardVideo &other);

    // functions

    void setVideoCardType(const TVideoCardType l_videocardtype);
    TVideoCardType getVideocardType() const;

    void setCardSpeed(const std::string l_speed);
    std::string getCardSpeed() const;

    void setHDMI_input(const int l_hdmi_input);
    int getHDMI_input() const;

    void setMaxResolution(const std::string l_max_resolution);
    std::string getMaxResolution() const;

    void setAmountOfVideoMemory(const std::string l_amount_of_video_memory);
    std::string getAmountOfVideoMemory() const;

    void show() const;
};

#endif // CARD_VIDEO_HPP
