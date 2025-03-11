//
// Created by AzadMammadov on 10/03/2025.
//
#include <iostream>
#include <cmath>
#include "calcMonthlyPayment.h"

double calcMonthlyPayment(const class calcLoan &loan) {

    double r = loan.getArt()/(12*100); // monthly interest rate

    double n = loan.getY()*12; // number of payments

    double numerator = loan.getP() * r * std::pow(1 + r,n);
    double denominator = std::pow(1 + r,n)-1;
    return numerator/denominator;
}
