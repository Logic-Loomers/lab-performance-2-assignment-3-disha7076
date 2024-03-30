#include <iostream>
#include <map>
#include <string>

using namespace std;

class Library {
private:
    map<string, string> bookMap;

public:
    Library() 
    {
        bookMap["9780132350884"] = "The C++ Programming Language";
        bookMap["9780321563842"] = "Effective C++";
        bookMap["9780201633610"] = "Design Patterns";
    }

    string searchBook(string &isbn) {
        auto bookIterator = bookMap.find(isbn);
        if (bookIterator != bookMap.end()) {
            return bookIterator->second;
        } else {
            return "Book not available in the library.";
        }
    }
};

int main() {
    Library library;
    string inputISBN;
    cout << "Enter the ISBN: ";
    cin >> inputISBN;
    string bookTitle = library.searchBook(inputISBN);
    cout << "Book Title: " << bookTitle << endl;

    return 0;
}
