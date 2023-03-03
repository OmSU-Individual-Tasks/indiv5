#ifndef matrix_class
#define matrix_class

#include <iostream>
#include <vector>

class Matrix
{
private:
    std::vector<double> matrixElements;

public:
    Matrix();
    ~Matrix();

    int numbOfElements();
    void fill();
};

#endif