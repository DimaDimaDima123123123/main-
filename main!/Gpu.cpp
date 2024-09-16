#include "GPU.h"
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS
GPU::GPU(const char* name, double price) : price(price) {
    strncpy_s(this->name, sizeof(this->name), name, _TRUNCATE);
}

const char* GPU::getName() const {
    return name;
}

double GPU::getPrice() const {
    return price;
}