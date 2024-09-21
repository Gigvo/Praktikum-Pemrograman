#include <iostream>
using namespace std;

int main()
{
    int gross_salary, installment, insurance, net_salary, tax;
    string name;
    cout << "Nama: ";
    getline (cin, name);
    cout << "Gross salary: ";
    cin>>gross_salary;
    cout << "Installment: ";
    cin>>installment;
    cout << "Insurace: ";
    cin>>insurance;
    
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
    
    return 0;
}

/*  TEST CASES
Name: Andi Setiawan
Gross Salary: Rp10000000,00
Tax 20%: Rp2000000,00
Installment: Rp200000,00
Insurance: Rp250000,00
Net Salary: Rp7550000,00

Name: Lionel Ronaldo
Gross Salary: Rp75000000,00
Tax 20%: Rp15000000,00
Installment: Rp1000000,00
Insurance: Rp750000,00
Net Salary: Rp58250000,00

Name: Jamal Misuala
Gross Salary: Rp2000000,00
Tax 20%: Rp400000,00
Installment: Rp75000,00
Insurance: Rp100000,00
Net Salary: Rp1425000,00

*/