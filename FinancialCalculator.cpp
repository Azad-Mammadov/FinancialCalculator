#include "myHeaders/calcLoan.h"
#include <iostream>
#include <cmath>


// Input: Loan amount, interest rate, time period
// Output: Monthly payment, total interest, amortization schedule


int main(){
   calcLoan myPayment(10, 100000, 8);

   calculateAmortizationSchedule(myPayment);
   printAmortizationSchedule (myPayment);

   return 0;
}