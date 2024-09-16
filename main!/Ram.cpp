#include "Ram.h"
#include <cstring>

Ram::Ram(const char* name, double price) : price(price) 
{
    strncpy_s(this->name, sizeof(this->name), name, _TRUNCATE);
}
const char* Ram::getName() const
{
    return name;
}
double Ram::getPrice() const 
{
    return price;
}