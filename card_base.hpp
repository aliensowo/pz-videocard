#ifndef CARD_BASE_HPP
#define CARD_BASE_HPP

#include <string>

class BaseDetail{

public:
    struct Title
    {
        std::string brand;  // фирма изготовитель
        std::string model;  //код модели
        int number; //номер модели
    };

private:
    Title title;    //имя детали
    std::string year_of_manufacture;    //год изготовления
    mutable bool guarantee;  //гарантия

public:
    BaseDetail();
    BaseDetail(const Title l_title,
               const std::string l_year_of_manufacture,
               const bool l_guarantee);
    BaseDetail(const BaseDetail &other);

    ~BaseDetail();
    BaseDetail &operator=(const BaseDetail &other);

    //  создать и получить Название
    void setTitle(const Title l_title);
    Title getTitle() const;

    //  создать и получить год изготовления
    void setYOM(const std::string l_year_manufacture);
    std::string getYOM() const;

    //  создать и получить есть ли гарантия на товар
    bool getGuarantee() const;
    void takeGuarantee() const;
    void putGuarantee() const;

    // показать
    void show() const;

};

#endif // CARD_BASE_HPP
