#include "Gpu.h"
#include <cstring>

Gpu::Gpu(const char* name, double price) : price(price)
{
    strncpy_s(this->name, sizeof(this->name), name, _TRUNCATE);
}

const char* Gpu::getName() const 
{
    return name;
}
double Gpu::getPrice() const 
{
    return price;
}