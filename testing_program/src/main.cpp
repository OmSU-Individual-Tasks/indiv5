#include <iostream>
#include "matrix_class/matrix_class.hpp"
#include "supp_func/supp_func.hpp"

int main()
{
    Matrix matrix;

    matrix.fill();
    matrix.show();

    pauseTerminal();
    return 0;
}