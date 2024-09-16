#ifndef SSD_H
#define SSD_H

class Ssd
{
private:
    char name[50]; 
    double price;
public:
    Ssd(const char* name, double price);
    const char* getName() const;
    double getPrice() const;
};
#endif