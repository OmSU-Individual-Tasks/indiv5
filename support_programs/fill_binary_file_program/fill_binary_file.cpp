#include <iostream>
#include <fstream>

int main()
{
    double item;

    std::string filePath;
    std::cout << "Enter the file name (the file will be saved at the path '../testing_program/test_files/file_name.bin'): ";
    std::cin >> filePath;
    filePath = "../../testing_program/test_files/" + filePath + ".txt";

    std::cout << filePath << std::endl;

    std::fstream file(filePath, std::ios::binary | std::ios::out);

    for (int i = 0; i < 5; i++)
    {
        std::cin >> item;
        file.write((char *)&item, sizeof(double));
    }

    file.close();

    return 0;
}