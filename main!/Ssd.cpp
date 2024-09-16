#include "SSD.h"
#include <cstring>
using namespace std;

Ssd::Ssd(const char* name, double price) : price(price) 
{
    strncpy_s(this->name, sizeof(this->name), name, _TRUNCATE);
}
const char* Ssd::getName() const 

{
    return name;
}
double Ssd::getPrice() const 
{
    return price;
}