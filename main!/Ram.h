#ifndef RAM_H
#define RAM_H
#define _CRT_SECURE_NO_WARNINGS
class RAM {
private:
    char name[50]; // fixed-size character array for name
    double price;
public:
    RAM(const char* name, double price);
    const char* getName() const;
    double getPrice() const;
};

#endif