// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    double drate,dwork,grss,insu,socse,tax,fcs,lss,netpay,socses,taxs;
    insu = 200;
    socse = 0.0325;
    tax = 0.2475;
    fcs = 0.02;
    std::cout << "what is your daily rate \n " ;
        std::cin >> drate;
    std::cout << "how many days did your work \n ";
        std::cin >> dwork;

    grss = drate*dwork;
    socses = grss*socse;
    taxs = grss*tax;
    lss = taxs+socses+insu;
    netpay = grss+lss;
     std::cout << "\n ========================= \n ";   
    std::cout << "\n ==days worked== \n";
        std::cout <<    dwork;
    std::cout << "\n ==daily rate== \n";
        std::cout <<    drate;
    std::cout << "\n ==social security== \n ";
        std::cout <<    socses;
    std::cout << "\n ========================= \n ";    
    std::cout << "\n ==gross income== \n ";
        std::cout <<    grss;
    std::cout << "\n ==less== \n ";
    std::cout <<    lss;
    std::cout << "\n ==netpay== \n ";
    std::cout <<    netpay;
    return 0;
