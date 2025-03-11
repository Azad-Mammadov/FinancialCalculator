#include <iostream>
#include <cmath>
#include "calcLoan.h"
#include "printPayment.h"

// Input: Loan amount, interest rate, time period
// Output: Monthly payment, total interest, amortization schedule



int main(){
   calcLoan myPayment(10, 100000, 8);

   //printPayment(myPayment);


   std::cout << myPayment.totalInterest() << std::endl;
   std::cout << calcMonthlyPayment(myPayment) << std::endl;
   //std::cin.get();
   return 0;
}