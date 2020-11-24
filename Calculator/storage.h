#ifndef _STORAGE_H_
#define _STORAGE_H_
#include <string>

class Storage
{
private:
    std::string name;
    int num;
public:
    Storage(std::string name, int num);
    Storage(const Storage &source);
    ~Storage();
    std::string get_name() const { return name; }
    int get_num() const { return num; }
    void display() const;
};

#endif