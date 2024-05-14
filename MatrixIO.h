#pragma once
#include <fstream>
#include "Matrix.h" // Предположим, что у вас уже есть класс Matrix

template<typename T>
void WriteMatrixToFile(const std::string& filename, const T& matrix) {
    std::ofstream file(filename, std::ios::app);
    if (!file.is_open()) {
        std::cerr << "Error opening file " << filename << std::endl;
        return;
    }

    file << matrix << std::endl;
    file.close();
}

template<typename T>
void ReadMatrixFromFile(const std::string& filename, T& matrix) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error opening file " << filename << std::endl;
        return;
    }

    file >> matrix;
    file.close();
}
