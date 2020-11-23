#ifndef _STORAGE_H_
#define _STORAGE_H_
#include <string>

class storage
{
private:
    std::string name;
    int num1;
    int num2;
public:
    storage(std::string name, int num1, int num2);
    storage(const storage &source);
    ~storage();
    void display() const;
};

#endif