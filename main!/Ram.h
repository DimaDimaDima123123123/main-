#ifndef RAM_H
#define RAM_H

class Ram
{
private:
    char name[50];
    double price;
public:
    Ram(const char* name, double price);
    const char* getName() const;
    double getPrice() const;
};
#endif