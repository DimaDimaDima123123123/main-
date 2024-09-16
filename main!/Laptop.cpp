#include "Laptop.h"
#include <iostream>
#include <cstring>

using namespace std;

Laptop::Laptop(const char* model, double casePrice, const Cpu& cpu, const Ram& ram, const Ssd& ssd, const Gpu& gpu)
    : casePrice(casePrice), cpu(cpu), ram(ram), ssd(ssd), gpu(gpu)

{
    strncpy(this->model, model, sizeof(this->model) - 1);
    this->model[sizeof(this->model) - 1] = '\0';
}

void Laptop::displayComponents() const 
{
    cout << "Model : " << model << endl;

    cout << "CPU : " << cpu.getName() << "- " << cpu.getPrice() << " $\n";

    cout << "GPU : " << gpu.getName() << "- " << gpu.getPrice() << " $\n";

    cout << "RAM:  " << ram.getName() << "- " << ram.getPrice() << " $\n";

    cout << "SSD : " << ssd.getName() << "- " << ssd.getPrice() << " $\n";

    cout << "Laptop case : " << casePrice << " $!\n\n";
}
double Laptop::calculateTotalPrice() const
{
    return casePrice + cpu.getPrice() + ram.getPrice() + ssd.getPrice() + gpu.getPrice();
}