#include "SSD.h"
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS
SSD::SSD(const char* name, double price) : price(price) {
    strncpy_s(this->name, sizeof(this->name), name, _TRUNCATE);
}

const char* SSD::getName() const {
    return name;
}

double SSD::getPrice() const {
    return price;
}