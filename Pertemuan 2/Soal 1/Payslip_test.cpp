#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int gross_salary, installment, insurance, net_salary, tax;
    string name;
    ifstream infile;
    infile.open("testcase.txt");
    if(infile.is_open()){
        while((getline(infile, name)) && (infile >> gross_salary >> installment >> insurance)){
            cout<<"Payslip for Employee"<<"\n";
            cout<<"--------------------"<<"\n";
  	        cout<<"Nama: "<<name<<"\n";
            cout<<"Gross salary: "<<"Rp"<<gross_salary<<",00"<<"\n";
            tax = gross_salary / 5;
            cout<<"Tax 20%: "<< "Rp" << tax <<",00" << "\n";
            cout<<"Installment: "<<"Rp"<<installment<<",00"<<"\n";
            cout<<"Insurace: "<<"Rp"<<insurance<<",00"<<"\n";
            net_salary = gross_salary - tax - installment - insurance;
            cout<<"Net salary: "<<"Rp"<<net_salary<<",00";
        }
    }
    
    return 0;
}