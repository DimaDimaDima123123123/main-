#ifndef SSD_H
#define SSD_H
#define _CRT_SECURE_NO_WARNINGS
class SSD {
private:
    char name[50]; // fixed-size character array for name
    double price;
public:
    SSD(const char* name, double price);
    const char* getName() const;
    double getPrice() const;
};

#endif