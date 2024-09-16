#ifndef GPU_H
#define GPU_H
#define _CRT_SECURE_NO_WARNINGS
class GPU {
private:
    char name[50]; // fixed-size character array for name
    double price;
public:
    GPU(const char* name, double price);
    const char* getName() const;
    double getPrice() const;
};

#endif