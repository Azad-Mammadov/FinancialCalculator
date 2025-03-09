#include <iostream>
#include <cmath>

// Input: Loan amount, interest rate, time period
// Output: Monthly payment, total interest, amortization schedule

class monthlyPayment {
  private:
    int m_y{}; // number of years for loan
    int n {m_y*12}; // total number of payments

    double m_p{}; // loan amount
    //double m_r{}; //monthly interest rate
    double m_art{}; // annual interest rate

  public:

    monthlyPayment(double art, int p, int y): m_art{art}, m_p{p}, m_y{y} {}


  // - functions ------------------------------------- +
    double calcMonthlyPayment() {

                             double const r = m_art/12*100; // monthly interest rate
                             double numerator = m_p*r*std::pow(1+r,2);
                             double denominator = std::pow(1+r,2)-1;
                             return numerator/denominator;
  }

  void printPayment () {
    std::cout << "Your monthly payment by default is: " << calcMonthlyPayment() << std::endl;
  }

  //  my overload ------------------------------------- +
  // double operator^(double base, int exp){
  //   double result = 1;
  //   for (int i = 1; i <= exp; i++) {
  //     result *= base;
  //   }
  //   return result;
  //   }
};

int main(){
   monthlyPayment myPayment(8, 100000, 10);

   myPayment.printPayment();
   return 0;
}