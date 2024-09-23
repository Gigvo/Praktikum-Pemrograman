do: payslip testcase

payslip: Payslip.o
	g++ Payslip.o -o payslip

testcase: Payslip_test.o
	g++ Payslip_test.o -o testcase

Payslip.o: Payslip.cpp
	g++ -c Payslip.cpp

Payslip_test.o: Payslip_test.cpp
	g++ -c Payslip_test.cpp

run:
	./payslip

test:
	./testcase

clean:
	del *.o payslip testcase