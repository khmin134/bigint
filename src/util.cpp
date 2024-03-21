#include "../inc/util.h"

namespace util {
    void input_number(std::string& a, std::string& b) {
        std::cout << "First number  >> ";
        std::cin >> a;

        std::cout << "Second number >> ";
        std::cin >> b;
    }

    int atoi(char a) {
        return a - 48;
    }

    char itoa(int a) {
        return a + 48;
    }

    std::string sum(const std::string& a, const std::string& b) {
        std::string result = "";
        bool carry = false;

        for(int i = a.size()-1; i >= 0; i--) {
            int n = atoi(a[i]) + atoi(b[i]) + carry;

            if(n / 10) {
                carry = true;
                n %= 10;
            } else {
                carry = false;
            }
            
            result.insert(0, 1, itoa(n));
        }

        return result;
    }

    std::string sub(const std::string& a, const std::string& b) {
        std::string result = "";
        bool carry = false, swap = false;

        std::string big, small;
        for(size_t i = 0; i < a.size(); i++) {
            if(atoi(a[i]) > atoi(b[i])) {
                big = a;
                small = b;
                break;
            } else if(atoi(a[i]) < atoi(b[i])) {
                big = b;
                small = a;
                swap = true;
                break;
            }
        }
            
        for(int i = a.size()-1; i >= 0; i--) {
            int n = atoi(big[i]) - atoi(small[i]) - carry;
            
            if(n < 0) {
                n *= -1;
                carry = true;
            } else {
                carry = false;
            }
            
            result.insert(0, 1, itoa(n));
        }

        while(result[0] == '0' && result.size() > 1)
            result.erase(0, 1);

        if(swap)
            result.insert(0, 1, '-');

        return result;
    }

    void make_same_size(std::string& a, std::string& b) {
        if(a.size() > b.size()) {
            while(a.size() != b.size()) {
                b.insert(0, 1, '0');
            }
        } else {
            while(a.size() != b.size()) {
                a.insert(0, 1, '0');
            }
        }
    }
}
