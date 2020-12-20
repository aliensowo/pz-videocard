#include "card_base.hpp"

#include <iostream>

using namespace std;

BaseDetail::BaseDetail():
    title({"", "", 0}),
    year_of_manufacture(""),
    guarantee(true)
{

}

BaseDetail::BaseDetail(const BaseDetail::Title l_title,
                       const std::string l_year_of_manufacture,
                       const bool l_guarantee):
    title(l_title),
    year_of_manufacture(l_year_of_manufacture),
    guarantee(l_guarantee)
{

}

BaseDetail::BaseDetail(const BaseDetail &other):
    title(other.title),
    year_of_manufacture(other.year_of_manufacture),
    guarantee(other.guarantee)
{

}

BaseDetail::~BaseDetail()
{

}

BaseDetail &BaseDetail::operator=(const BaseDetail &other)
{
    if(this == &other) return *this;

    title = other.title;
    year_of_manufacture = other.year_of_manufacture;
    guarantee = other.guarantee;

    return *this;
}

// func setTitle
void BaseDetail::setTitle(const BaseDetail::Title l_title)
{
    title = l_title;
}

// func getTitle
BaseDetail::Title BaseDetail::getTitle() const
{
    return title;
}

//  func set years of manufacture
void BaseDetail::setYOM(const std::string l_year_manufacture)
{
    year_of_manufacture = l_year_manufacture;
}

//  func get years of manufacture
std::string BaseDetail::getYOM() const
{
    return year_of_manufacture;
}

//  func get guarantee
bool BaseDetail::getGuarantee() const
{
    return guarantee;
}

// func take guarantee
void BaseDetail::takeGuarantee() const
{
    guarantee = true;
}

//  func put guarantee
void BaseDetail::putGuarantee() const
{
    guarantee = false;
}

// func show
void BaseDetail::show() const
{
    cout << "Model: (" << title.brand << " "
                       << title.model << " "
                       << title.number << ")\n"
         << "Year of manufacture" << year_of_manufacture << "\n"
         << "Guarantee" << guarantee << "\n"
         << endl;
}

