#include <iostream>
#include <cstring>
#include <string>
#include <string_view>
#include <sstream>

#include "Log.h"
#include "pointers.h"
#include "classes.h"

int main()
{
    std::stringstream ss;

    for (int i = 0; i < 10; i++) {
        ss << i;
        if (i != 9) ss << " ";
    }

    std::string res = ss.str();
    std::cout << res << std::endl;

    int num;
    ss >> num;
    std::cout << num << std::endl;

    std::cin.get();

    return 0;
}
