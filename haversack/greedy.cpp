#include <iostream>

class Wallet {
  public:
    int copper;
    int silver;
    int electrum;
    int gold;
    int platinum;

    Wallet(int c, int s, int e, int g, int p) {
        copper = c;
        silver = s;
        electrum = e;
        gold = g;
        platinum = p;
        this->condense();
    }
    void printWealth() {
        std::cout << "Total Wealth:\n\n";
        std::cout << this->platinum << "PP, ";
        std::cout << this->gold << "GP, ";
        std::cout << this->silver << "SP, ";
        std::cout << this->copper << "CP\n";
    }
    int totalWealth() {
        return copper + silver * 10 + electrum * 50 + gold * 100 + platinum * 1000;
    }
    void add(int c, int s, int e, int g, int p) {
        copper += c;
        silver += s;
        electrum += e;
        gold += g;
        platinum += p;
    }
    void remove(int c, int s, int e, int g, int p) {
        copper -= c;
        silver -= s;
        electrum -= e;
        gold -= g;
        platinum -= p;
    }
    void condense() {
        int wealth = this->totalWealth();
        int rem = 0;

        rem = wealth % 1000;
        this->platinum = (wealth - rem) / 1000;
        wealth = rem;

        rem = wealth % 100;
        this->gold = (wealth - rem) / 100;
        wealth = rem;

        // We're skipping electrum because its stupid

        rem = wealth % 10;
        this->silver = (wealth - rem) / 10;

        this->copper = rem;
    }
};

int main() {
    Wallet myWallet(94, 69, 2, 76, 2);
    myWallet.printWealth();
}
