#ifndef GPU_H
#define GPU_H
class Gpu
{
private:
    char name[50];
    double price;
public:
    Gpu(const char* name, double price);
    const char* getName() const;
    double getPrice() const;
};

#endif