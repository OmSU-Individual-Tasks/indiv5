#include "matrix_class.hpp"
#include "../supp_func/supp_func.hpp"

Matrix::Matrix(/* args */)
{
}

Matrix::~Matrix()
{
}

int Matrix::numbOfElements()
{
    return matrixElements.size();
}

void Matrix::fill()
{
    std::cout << "Menu" << std::endl
              << std::endl
              << "How you want to fill in the matrix:" << std::endl
              << "  1). Manually" << std::endl
              << "  2). With random values" << std::endl
              << "  3). From a binary file" << std::endl
              << "  4). From a typed file" << std::endl;
    int *option = new int(optionInput(4));

    clearTerminal();

    std::cout << "Enter the number of rows and columns: ";

    int *rowCount = new int(intInput()), *colCount = new int(intInput());

    switch (*option)
    {
    case 1:
    {
        std::cout << std::endl
                  << "Enter the elements of the matrix:" << std::endl
                  << std::endl;

        for (int i = 0; i < (*colCount) * (*rowCount); i++)
            matrixElements.push_back(doubleInput());

        break;
    }
        
    case 2:
    {
        /* code */
        break;
    }

    case 3:
    {
        /* code */
        break;
    }

    case 4:
    {
        /* code */
        break;
    }

    default:
    {
        std::cerr << "(!) There was an unknown error" << std::endl;
        break;
    }
    }

    delete option;
}
