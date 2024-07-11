#include <iostream>
#include <fstream>

int main() {
    std::ifstream list;
    list.open("../list.txt");
    std::string null;
    std::string strPay;
    int sum = 0;
    int max = 0;

    while (!list.eof()) {
        list >> null >> null >> strPay >> null;
        int pay = std::stoi(strPay);

        if (pay > max) {
            max = pay;
        }

        sum += pay;
    }

    std::cout << "Total amount of payments: " << sum << std::endl;
    std::cout << "The biggest payout: " << max << std::endl;

    list.close();

    return 0;
}
