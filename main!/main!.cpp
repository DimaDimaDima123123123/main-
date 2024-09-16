#include "Laptop.h"
#include "Cpu.h"
#include "Ram.h"
#include "Ssd.h"
#include "Gpu.h"
#include <iostream>
using namespace std;

int main() 
{
    Cpu cpu("Intel i511500", 200);

    Ram ram("Kingston 32GB", 180);

    Ssd ssd("Kingston 512GB", 100);

    Gpu gpu("Nvidia RTX 4060", 808);

    Laptop laptop("Msi", 200, cpu, ram, ssd, gpu);


    laptop.displayComponents();

    cout << "Total price of the laptop : " << laptop.calculateTotalPrice() << " $!\n";

    return 0;
}