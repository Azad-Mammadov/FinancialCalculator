#include <iostream>
#include <cmath>

// Input: Loan amount, interest rate, time period
// Output: Monthly payment, total interest, amortization schedule

class monthlyPayment {
  private:

    double m_art{}; // annual interest rate
    double m_p{}; // loan amount
    int m_y{}; // number of years for loan

  public:

    monthlyPayment(double art, double p, int y): m_art{art}, m_p{p}, m_y{y} {}


  // - functions ------------------------------------- +
    double calcMonthlyPayment() {

                             double const r = m_art/(12*100); // monthly interest rate

                             double n = m_y*12; // number of payments

                             double numerator = m_p * r * std::pow(1 + r,n);
                             double denominator = std::pow(1 + r,n)-1;
                             return numerator/denominator;
  }

    double totalInterest () {
      double monthlyPayment = calcMonthlyPayment();
      int totalMonths = m_y*12;
      return (monthlyPayment*totalMonths) - m_p;
    }

  void printPayment () {
    std::cout << "Your monthly payment by default is: " << calcMonthlyPayment() << std::endl;
    std::cout << "Bank's total interest is: " << totalInterest() << std::endl;
  }

};

int main(){
   monthlyPayment myPayment(10, 100000, 8);

   myPayment.printPayment();

   std::cout << "Press Enter to exit\n";
   std::cin.get();
   return 0;
}