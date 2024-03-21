#include <string>
#include <iostream>
#include "../inc/util.h"

int main() {
    std::string a, b;
    util::input_number(a, b);
    util::make_same_size(a, b); 
   
    std::cout << "Sum           >> " << util::sum(a, b) << std::endl;
    std::cout << "Sub           >> " << util::sub(a, b) << std::endl;
}
