#include "haversack/dice.h"
#include <iostream>
#include <math.h>
#include <string>
#include <time.h>

std::string textDivider() {
    return "----------------------------------------";
}

std::string textHeader(std::string str) {
    std::string halfLine = "";
    int length = str.length();
    for (int i = 0; i < (38 - length) / 2; i++) {
        halfLine += "-";
    }
    std::string header = "\n" + halfLine + " " + str + " " + halfLine;
    if (length % 2 == 1) {
        header += "-";
    }
    header += "\n";
    return header;
}

int main() {
    std::cout << textHeader("Roll d20s test!");
    std::cout << "Rolling several d20: " << "\n";
    for (int i = 0; i < 10; i++) {
        std::cout << "Roll " << i + 1 << ": " << d20() << "\n";
    }
    std::cout << textDivider() << std::endl;
    return 0;
}
