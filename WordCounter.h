#pragma once
#include <string>
#include <fstream>

template<typename T>
int CountWordOccurrences(const std::string& filename, const T& word) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error opening file " << filename << std::endl;
        return -1;
    }

    int count = 0;
    T buffer;
    while (file >> buffer) {
        if (buffer == word) {
            count++;
        }
    }

    file.close();
    return count;
}
