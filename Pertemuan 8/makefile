do: code testcase

code: code.o
	g++ code.o -o code

testcase: code_test.o
	g++ code_test.o -o testcase

code.o: code.cpp
	g++ -c code.cpp

code_test.o: code_test.cpp
	g++ -c code_test.cpp

code2.o: code2.cpp
	g++ -c code2.cpp

code2_test: code2_test.cpp
	g++ -c code2_test.cpp

test:
	./testcase
	./code
	./code2
	./code2_test
clean:
	del *.o code testcase code2 code2_test