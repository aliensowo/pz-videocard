#include "card_base.hpp"

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
