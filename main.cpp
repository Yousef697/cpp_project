#include <iostream>
#include <cstring>

#include "Log.h"
#include "pointers.h"
#include "classes.h"

int main()
{
    Human joe("Joe", 0, 0);
    joe.Info();
    joe.Move(1, 2);
    std::cout << std::endl;

    Player mark("Mark", 3, 5, "Football");
    mark.Info();
    mark.Move(-1, -2);
    std::cout << std::endl;

    Human* mary = new Player("Mary", 3.5, 6.25, "Chess");
    mary->Info();
    std::cout << std::endl;

    std::cout << "Joe's status: "; joe.GetStatus();
    std::cout << "Mark's status: "; mark.GetStatus();
    std::cout << "Mary's status: "; mary->GetStatus();

    std::cin.get();

    return 0;
}
