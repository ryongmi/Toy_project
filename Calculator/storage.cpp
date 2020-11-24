#include<iostream>
#include "storage.h"

Storage::Storage(std::string name, int num)
    : name(name), num(num) {
}

Storage::Storage(const Storage &source)
    : Storage{source.name, source.num} {
}

Storage::~Storage() {
}

void Storage::display() const {
    std::cout<< name << " " << num << std::endl;
}