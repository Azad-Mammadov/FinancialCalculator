#include <iostream>



class monthlyPayment {
  private:
    int m_y{}; // number of years for loan
    int n {m_y*12}; // total number of payments

    double m_p{}; // loan amount
    double m_r{}; //monthly interest rate

  public:
    double art{}; // annual interest rate



  // - functions ------------------------------------- +
  double monthlyPayment() {
    double getMonthlyPayment{


    };
  }


  double operator^(double base, int exp){
    double result = 1;
    for (int i = 1; i <= exp; i++) {
      result *= base;
    }
    return result;
    }
};

int main(){
  GradeMap grades{};

  grades["Joe"] = 'A';
  grades["Frank"] = 'B';

  std::cout << "Joe has a grade of " << grades["Joe"] << '\n';
  std::cout << "Frank has a grade of " << grades["Frank"] << '\n';
  return 0;
}