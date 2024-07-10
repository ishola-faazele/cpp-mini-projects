#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    private:
        const string acc_no;
        string acc_name;
        float balance;
        static float totalBankBal;
    public:
        // BankAccount();
        BankAccount(string new_acc_no, string new_acc_name, float new_balance)
         : acc_no(new_acc_no), acc_name(new_acc_name), balance(new_balance) {totalBankBal+=new_balance;}

        void Deposit(float amount) {
            if(amount > 0) {
                this->balance += amount;
                totalBankBal += amount;
                cout << "Deposited: " << amount << " into account number " << acc_no << 
                "new account balance is " << balance;
            }
            else {
                cout << "Invalid deposit amount\n";
            }
        }
        void Withdraw(float amount) {
            if(amount > 0 && balance >= amount) {
                totalBankBal -= amount;
                this->balance -= amount;
                cout << "Withdrew: " << amount << "from: \n";
                DisplayAccInfo();
            }
            
            
        }
        void DisplayAccInfo() const {
            cout << "Account Details\n";
            cout << "Account Number: " << acc_no << endl;
            cout << "Account Name: " << acc_name << endl;
            cout << "Account Balance: " << balance << endl;
        }
};
// Static member initialization
float BankAccount::totalBankBal = 0.0;
// char[] and string
int main() {
    string name = "Ishola";
    string no = "12345";
    BankAccount my_acc(no, name, 20000.00);
}