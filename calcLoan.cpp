//
// Created by AzadMammadov on 10/03/2025.
//

#include "calcLoan.h"
#include "calcMonthlyPayment.h"
#include "printPayment.h"

    calcLoan::calcLoan(double art, double p, int y): m_art{art}, m_p{p}, m_y{y} {}


    // - functions ------------------------------------- +



    double calcLoan::totalInterest () {
        //double monthlyPayment = calcLoan();
        int totalMonths = m_y*12;
        return (calcMonthlyPayment(*this)*totalMonths) - m_p;
       }

    double calcLoan::amortizationSchedule(){
      return 0.0;
    };
