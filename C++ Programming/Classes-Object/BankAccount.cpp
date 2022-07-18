#include <iostream>
#include <cstring>
using namespace std;

namespace bankaccount
{
    class bank_account
    {
        int acno;
        char dep_name[50];
        char actype[2];
        float balance;
    public:
        void init();
        void deposit()
        {
            
        }
        void withdraw();
        void display_balance();
    };

    void bank_account ::init()
    {
        acno = 1234;
        strcpy(dep_name, "Prince Kumar");
        strcpy(actype, "SA");
        balance = 10000.00F;
    }

    void bank_account ::display_balance()
    {
        std::cout << "Depositor Name: " << dep_name << endl;
        cout << "Balance: " << balance << endl;
    }
}

int main()
{
    bankaccount::bank_account ac;
    ac.init();
    ac.display_balance();
    return 0;
}