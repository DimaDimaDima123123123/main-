#ifndef LAPTOP_H
#define LAPTOP_H
#define _CRT_SECURE_NO_WARNINGS
#include "Cpu.h"
#include "RAM.h"
#include "SSD.h"
#include "GPU.h"

class Laptop {
private:
    char model[50];   // fixed-size character array for model name
    double casePrice;
    Cpu cpu;
    RAM ram;
    SSD ssd;
    GPU gpu;

public:
    Laptop(const char* model, double casePrice, const Cpu& cpu, const RAM& ram, const SSD& ssd, const GPU& gpu);
    void displayComponents() const;
    double calculateTotalPrice() const;
};

#endif