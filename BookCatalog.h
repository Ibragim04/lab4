#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

struct Book {
    std::string id;
    std::string author;
    std::string title;
    int pages;
};

class BookCatalog {
public:
    void AddBook(const Book& book);
    void ViewAllBooks();
    void RemoveBook(const std::string& id);
    Book* FindBook(const std::string& id);
    void EditBook(const std::string& id, const Book& updatedBook);

private:
    std::vector<Book> catalog;

    void LoadCatalogFromFile(const std::string& filename);
    void SaveCatalogToFile(const std::string& filename);
};
