//
// Created by AzadMammadov on 10/03/2025.
//
#include "myHeaders/calcLoan.h"
#include <iomanip>
#include <iostream>


void printTableHeader() {
    std::cout << std::setw(6) << "Date"
              << std::setw(15) << "Payment (€)"
              << std::setw(15) << "Interest (€)"
              << std::setw(20) << "Principal (€)"
              << std::setw(25) << "Remaining Balance (€)" << std::endl;
    std::cout << std::string(80, '-') << std::endl;  // Separator line
}

void printTableRow(const std::string& date, double payment, double interest, double principal, double balance) {
    std::cout << std::setw(6) << date
              << std::setw(15) << std::fixed << std::setprecision(2) << payment
              << std::setw(15) << interest
              << std::setw(20) << principal
              << std::setw(25) << balance << std::endl;
}

    void printAmortizationSchedule (calcLoan& loan) {
        printTableHeader();
        int totalMonths = loan.getY()*12;
        for (int i = 0; i < totalMonths; i++) {
            const auto& data = loan.amortizationSchedule[i];
            printTableRow(data.date, data.payment, data.interest, 
                            data.principal, data.balance);
                }
    }

