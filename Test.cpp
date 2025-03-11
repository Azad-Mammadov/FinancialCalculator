#include <iostream>
#include <iomanip>  // For std::setw

void printTableHeader() {
    std::cout << std::setw(6) << "Month"
              << std::setw(15) << "Payment (€)"
              << std::setw(15) << "Interest (€)"
              << std::setw(20) << "Principal (€)"
              << std::setw(25) << "Remaining Balance (€)" << std::endl;
    std::cout << std::string(80, '-') << std::endl;  // Separator line
}

void printTableRow(int month, double payment, double interest, double principal, double balance) {
    std::cout << std::setw(6) << month
              << std::setw(15) << std::fixed << std::setprecision(2) << payment
              << std::setw(15) << interest
              << std::setw(20) << principal
              << std::setw(25) << balance << std::endl;
}

int main() {
    printTableHeader();
    printTableRow(1, 1517.42, 833.33, 684.09, 99315.91);
    printTableRow(2, 1517.42, 827.63, 689.79, 98626.12);
    printTableRow(3, 1517.42, 821.89, 695.53, 97930.59);
    // Add your own loop to print all months dynamically
    return 0;
}
