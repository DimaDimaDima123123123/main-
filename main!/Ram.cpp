#include "RAM.h"
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS
RAM::RAM(const char* name, double price) : price(price) {
    strncpy_s(this->name, sizeof(this->name), name, _TRUNCATE);
}

const char* RAM::getName() const {
    return name;
}

double RAM::getPrice() const {
    return price;
}