#ifndef LAPTOP_H
#define LAPTOP_H
#define _CRT_SECURE_NO_WARNINGS

#include "Cpu.h"
#include "Ram.h"
#include "Ssd.h"
#include "Gpu.h"
using namespace std;

class Laptop 
{
private:

    char model[50]; 
    double casePrice;

    Cpu cpu;
    Ram ram;
    Ssd ssd;
    Gpu gpu;

public:
    Laptop(const char* model, double casePrice, const Cpu& cpu, const Ram& ram, const Ssd& ssd, const Gpu& gpu);

    void displayComponents() const;
    double calculateTotalPrice() const;
};

#endif