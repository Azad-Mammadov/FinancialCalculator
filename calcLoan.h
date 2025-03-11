//
// Created by AzadMammadov on 10/03/2025.
//

#ifndef CALCLOAN_H
#define CALCLOAN_H

class calcLoan {

private:

    double m_art{}; // annual interest rate
    double m_p{}; // loan amount
    int m_y{}; // number of years for loan

public:

    calcLoan(double art, double p, int y);

// - function declarations ------------------------------------- +

    double totalInterest ();
    double amortizationSchedule();

    // Getting private variables
    double getArt() const {return m_art;}
    double getP() const {return m_p;}
    int getY() const {return m_y;}
};

double calcMonthlyPayment(const calcLoan &loan);

#endif //CALCLOAN_H
