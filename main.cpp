#include <iostream>
#include "WordCounter.h"

int main() {
    std::string filename = "text.txt";
    std::string word = "hello";

    int count = CountWordOccurrences(filename, word);
    if (count >= 0) {
        std::cout << "The word '" << word << "' appears " << count << " times in the file." << std::endl;
    } else {
        std::cout << "An error occurred." << std::endl;
    }

    return 0;
}
