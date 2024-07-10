#include <string>
#include <iostream>
using namespace std;

class Publications {
    private:
        string title;
        float price;
    public:
        void GetData() {
            cout << "\nWhat is the title of the book?\t";
            cin.ignore();
            getline(cin, title);
            cout << "\nWhat is the price of the book?\t";
            cin >> price;
        }
        void DisplayData() {
            cout << "\nThe name of the book is " << title;
            cout << "\nIt costs " << price;
        }
    protected:
        float GetPrice() { return price; }
        void SetPrice(float p) { price = p; }
        string GetTitle() { return title; }
};

class Book: public Publications {
    private: 
        int page_count;
    public:
        void GetData() {
            Publications::GetData();
            cout << "\nWhat is the page count of the book?\t";
            cin >> page_count;
        }
        void DisplayData() {
            Publications::DisplayData();
            cout << "\nIt has " << page_count << "pages.\n";
        }
        
        friend void DisplayBookDetails(Book&);
        friend class Library;
};

class Tape: public Publications {
    private:
        float playing_time;

    public:
        void GetData() {
            Publications::GetData();
            cout << "\nWhat is the playing time of this tape?\t";
            cin >> playing_time;
        }
        void DisplayData() {
            Publications::DisplayData();
            cout << "\nIt has a playing time of " << playing_time;
        }
};

void DisplayBookDetails(Book& book) {
    cout 
        << "Book title: " << book.GetPrice()
        << " , Price: " << book.GetPrice()
        << ", Pages: " << book.page_count << endl;
}

class Library {
    public:
        void ManagBook(Book& book) {
            cout << "Friend Class Access:\n";
            cout << "Managing book: " << book.GetTitle() << "\n";
            book.SetPrice(book.GetPrice() * 0.9); // Applying a discount
            cout << "New price after discount: " << book.GetPrice() << "\n";
        }
};

class DiscountedBook: private Book {
    private:
        float discount;
    public:
        void SetDiscount(float new_discount) { discount = new_discount; }
        void ApplyDiscount() {
            float price = GetPrice();
            SetPrice(price * (1 - discount / 100));
        }
        void DisplayData() {
            Book::DisplayData();
            cout << "Discount applied: " << discount << "%" << endl;
        }
    
};

int main() {
    // Book atomic_habit;
    // atomic_habit.GetData();
    // atomic_habit.DisplayData();

    // DiscountedBook atomic_habit;
    // atomic_habit.GetData();

}