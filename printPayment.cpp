//
// Created by AzadMammadov on 10/03/2025.
//
#include <iostream>
#include "printPayment.h"
#include "calcLoan.h"


void printPayment (calcLoan& payment) {
    std::cout << "Your monthly payment by default is: " << payment << std::endl;
    std::cout << "Bank's total interest is: " << payment.totalInterest() << std::endl;
}
