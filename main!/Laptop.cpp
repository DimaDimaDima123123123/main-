#include "Laptop.h"
#include <iostream>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS
Laptop::Laptop(const char* model, double casePrice, const Cpu& cpu, const RAM& ram, const SSD& ssd, const GPU& gpu)
    : casePrice(casePrice), cpu(cpu), ram(ram), ssd(ssd), gpu(gpu) {
    std::strncpy(this->model, model, sizeof(this->model) - 1);
    this->model[sizeof(this->model) - 1] = '\0'; // Ensure null termination
}

void Laptop::displayComponents() const {
    std::cout << "Model: " << model << std::endl;
    std::cout << "CPU: " << cpu.getName() << " - $" << cpu.getPrice() << std::endl;
    std::cout << "RAM: " << ram.getName() << " - $" << ram.getPrice() << std::endl;
    std::cout << "SSD: " << ssd.getName() << " - $" << ssd.getPrice() << std::endl;
    std::cout << "GPU: " << gpu.getName() << " - $" << gpu.getPrice() << std::endl;
    std::cout << "Laptop Case: $" << casePrice << std::endl;
}

double Laptop::calculateTotalPrice() const {
    return casePrice + cpu.getPrice() + ram.getPrice() + ssd.getPrice() + gpu.getPrice();
}