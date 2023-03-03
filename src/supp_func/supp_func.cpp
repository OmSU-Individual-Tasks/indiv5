#include "supp_func.hpp"

void clearTerminal()
{
    system("cls");
}

void pauseTerminal()
{
    system("pause");
}

int optionInput(int max)
{
    int option = 0;
    while (option < 1 or option > max)
    {
        std::cout << std::endl
                  << "Enter a value: ";
        std::cin >> option;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if (option < 1 or option > max)
            std::cerr << "The entered value is invalid." << std::endl;
    }
    return option;
}

int intInput()
{
    int num;
    while (true)
    {
        std::cin >> num;
        if (std::cin.good())
            break;
        else if (std::cin.fail())
        {
            std::cerr << std::endl
                      << "The entered value is invalid." << std::endl;
            std::cin.clear();
            while (std::cin.get() != '\n');
            continue;
        }
    }
    return num;
}

double doubleInput()
{
    double num;
    while (true)
    {
        std::cin >> num;
        if (std::cin.good())
            break;
        else if (std::cin.fail())
        {
            std::cerr << std::endl
                      << "The entered value is invalid." << std::endl;
            std::cin.clear();
            while (std::cin.get() != '\n');
            continue;
        }
    }
    return num;
}