#include<iostream>
#include "storage.h"

storage::storage(std::string name, int num1, int num2)
    : name(name), num1(num1), num2(num2) {
}

storage::storage(const storage &source)
    : storage{source.name, source.num1, source.num2} {
}

storage::~storage() {
}

void storage::display() const {
    std::cout<< name << " " << num1 << " " << num2 << std::endl;
}