#ifndef matrix_class
#define matrix_class

#include <iostream>
#include <vector>

class Matrix
{
private:
    std::vector<double> matrixElements;
    int rowCount = 0;
    int colCount = 0;
    int status;

public:
    Matrix();
    ~Matrix();

    int numbOfElements();
    void fill();
    void show();
};

#endif