//
// Created by AzadMammadov on 10/03/2025.
//

#ifndef CALCLOAN_H
#define CALCLOAN_H

#include <cmath>
#include <iostream>
#include <array>

class calcLoan {

private:

    //double r = m_art/(12*100);
    double m_art{}; // annual interest rate
    double m_p{}; // loan amount
    int m_y{}; // number of years for loan
    double r{};

public:
    //calcLoan(double art, double p, int y);
    calcLoan(double art, double p, int y)
    : m_art(art), m_p(p), m_y(y), r(art/(12*100)){};

// - function declarations ------------------------------------- +



    // Getting private variables
    [[nodiscard]]double getArt() const {return m_art;}
    [[nodiscard]]double getP() const {return m_p;}
    [[nodiscard]]int getY() const {return m_y;}
    [[nodiscard]]double getR() const {return r;}

    double totalInterest () const {
        int totalMonths = m_y*12;
        return (calcMonthlyPayment()*totalMonths)-m_p;
    };

    double calcMonthlyPayment() const {

        //double r = m_art/(12*100); // monthly interest rate
        double n = m_y*12; // number of payments
        double numerator = m_p * r * std::pow(1 + r,n);
        double denominator = std::pow(1 + r,n)-1;
        return (denominator == 0) ? 0 : numerator/denominator;
    }

    friend double amortizationPerMonth(calcLoan& myLoan);

    struct AmortizationData {
        std::string date;
        double payment{};
        double interest{};
        double principal{};
        double balance{};
    };

    std::array <AmortizationData, 96> amortizationSchedule{};

};

//void printPayment (calcLoan& x); //double calcMonthlyPayment(calcLoan &myLoan);
void printAmortizationSchedule (calcLoan& loan);
void calculateAmortizationSchedule(calcLoan& myLoan);

#endif //CALCLOAN_H
