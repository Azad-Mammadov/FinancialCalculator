#include "myHeaders\calcLoan.h"
#include <string>
#include <array>

//amortization schedule

const std::array <std::string, 12> monthNames = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};

double amortizationPerMonth(calcLoan& yourLoan) {
    double interest = yourLoan.getP() * yourLoan.getR();
    double principal = yourLoan.calcMonthlyPayment() - yourLoan.getArt();
    return principal;
}


void calculateAmortizationSchedule (calcLoan& yourLoan) {
    double remainingBalance = yourLoan.getP();
int totalMonths = yourLoan.getY()*12;

    for (int i = 0; i < totalMonths; i++) {
        double interest = remainingBalance * yourLoan.getR();
        double principal = yourLoan.calcMonthlyPayment() - interest;
        remainingBalance -= principal;

        int year = i / 12 + 1;
        std::string date = monthNames[i % 12] + " " + std::to_string(year);

        yourLoan.amortizationSchedule[i] = {
            date, // Date 
            yourLoan.calcMonthlyPayment(), 
            interest, 
            principal, 
            remainingBalance
        };
    }




}
