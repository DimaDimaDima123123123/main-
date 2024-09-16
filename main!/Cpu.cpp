#include "Cpu.h"
#include <cstring>

Cpu::Cpu(const char* name, double price) : price(price)
{
    strncpy_s(this->name, sizeof(this->name), name, _TRUNCATE);
}
const char* Cpu::getName() const 
{
    return name;
}
double Cpu::getPrice() const
{
    return price;
}