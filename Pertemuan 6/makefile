do: code testcase

code: code.o
	g++ code.o -o code

testcase: code_test.o
	g++ code_test.o -o testcase

code.o: code.cpp
	g++ -c code.cpp

code_test.o: code_test.cpp
	g++ -c code_test.cpp

test:
	./testcase
	./code

clean:
	del *.o code testcase

