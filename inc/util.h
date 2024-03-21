#ifndef UTIL_H
#define UTIL_H

#include <string>
#include <iostream>

namespace util {
    int atoi(char a);
    char itoa(int a);
    void input_number(std::string& a, std::string& b);
    void make_same_size(std::string& a, std::string& b);
    std::string sum(const std::string& a, const std::string& b);
    std::string sub(const std::string& a, const std::string& b);
}

#endif
