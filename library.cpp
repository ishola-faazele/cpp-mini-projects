#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

class Book {
    private:
        string book_title;
        string isbn;
        string author;
        bool is_borrowed;

    public:
        Book(string, string, string);
        Book() : book_title(""), isbn(""), author(""), is_borrowed(false) {}
        void SetBookTitle(string);
        void SetIsbn(string);
        void SetAuthor(string);
        void SetIsBorrowed(bool);
        string GetBookTitle() const;
        string GetIsbn() const;
        string GetAuthor() const;
        bool GetIsBorrowed() const;
        void DisplayBookDetails() const;

};


Book::Book(string new_book_title, string new_isbn, string new_author)
    : book_title(new_book_title), isbn(new_isbn), author(new_author) {
        is_borrowed = false;
    }

void Book::SetBookTitle(string new_book_title) {book_title =new_book_title;}

void Book::SetIsbn(string new_isbn) { isbn = new_isbn; }

void Book::SetAuthor(string new_author) { author = new_author; }

void Book::SetIsBorrowed(bool new_is_borrowed) { is_borrowed = new_is_borrowed;}

string Book::GetBookTitle() const { return book_title; }

string Book::GetIsbn() const { return isbn; }

string Book::GetAuthor() const {return author;}

bool Book::GetIsBorrowed() const { return is_borrowed; }

void Book::DisplayBookDetails() const {
    cout<< left
        << setw(30) << book_title
        << setw(30) << isbn
        << setw(30) << author
        << boolalpha
        << setw(30) << is_borrowed
        << endl;
}

class Patron {
    private:
        int patron_id;
        string name;
        vector<Book*> borrowed_books;
    public:
        Patron(int new_patron_id, string new_name): patron_id(new_patron_id), name(new_name){}
        int GetPatronId() const { return patron_id; }
        string GetName() const { return name; }
        
        void BorrowBook(Book* book_to_borrow)  {
            if(!book_to_borrow->GetIsBorrowed()) {
                borrowed_books.push_back(book_to_borrow);
                book_to_borrow->SetIsBorrowed(!book_to_borrow->GetIsBorrowed());
            } else {
                std::cout << "Book is already borrowed.\n";
            }
        }
        void returnBook(Book* book) {
            auto it = std::find(borrowed_books.begin(), borrowed_books.end(), book);
            if(it != borrowed_books.end()) {
                borrowed_books.erase(it);
                book->SetIsBorrowed(false);
            }  else {
                cout << "Book not found in borrowed list.\n";
            }

        }

};
class Library {
    private:
        vector<Book*> all_books;
        vector<Patron*> all_patrons;

        Patron* FindPatron(int id) {
            for (auto& patron : all_patrons) {
                if (patron->GetPatronId() == id) {
                    return patron;
                }
            }
            return nullptr;
        }   

        Book* FindBook(string isbn) {
            for (auto& book : all_books) {
                if (book->GetIsbn() == isbn) {
                    return book;
                }
            }
            return nullptr;
        }

    public:
        void AddBook(Book* book_to_add) { all_books.push_back(book_to_add); }
        void AddPatron(Patron* patron_to_add) {all_patrons.push_back(patron_to_add); }
        void BorrowBook(int patron_id, string isbn) {
            Patron* patron_to_borrow = FindPatron(patron_id);
            Book* book_to_borrow = FindBook(isbn);

            if(patron_to_borrow && book_to_borrow) 
                patron_to_borrow->BorrowBook(book_to_borrow);
        }

        void ListAvailableBooks() const {
            for(auto book: all_books) {
                if(!book->GetIsBorrowed()) 
                    book->DisplayBookDetails();
            }
        } 
        void ListBorrowedBooks() const {
            for(auto book: all_books) {
                if(book->GetIsBorrowed()) 
                    book->DisplayBookDetails();
            }
        } 
};
int main() {
    
}
