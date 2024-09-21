do: multiplication testcase

multiplication: multiplication.o
	g++ multiplication.o -o multiplication

testcase: multiplication_test.o
	g++ multiplication_test.o -o testcase

multiplication.o: multiplication.cpp
	g++ -c multiplication.cpp

multiplication_test: multiplication_test.cpp
	g++ -c multiplication_test.cpp

run: 
	./multiplication

test: 
	./testcase

clean: 
	del *.o multiplication testcase