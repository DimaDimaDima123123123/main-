#define _CRT_SECURE_NO_WARNINGS
#include "Laptop.h"
#include "Cpu.h"
#include "RAM.h"
#include "SSD.h"
#include "GPU.h"
#include <iostream>

int main() {
    Cpu cpu("Intel i7", 300);
    RAM ram("Corsair 16GB", 100);
    SSD ssd("Samsung 1TB", 150);
    GPU gpu("NVIDIA GTX 3080", 700);

    Laptop laptop("Dell XPS", 200, cpu, ram, ssd, gpu);

    laptop.displayComponents();
    std::cout << "Total Price: $" << laptop.calculateTotalPrice() << std::endl;

    return 0;
}