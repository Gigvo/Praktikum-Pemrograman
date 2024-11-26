do: code testcase

code: Soal_7.o
	g++ Soal_7.o -o code

testcase: Soal_7_test.o
	g++ Soal_7_test.o -o testcase

code.o: Soal_7.cpp
	g++ -c Soal_7.cpp

code_test.o: Soal_7_test.cpp
	g++ -c Soal_7_test.cpp

test:
	./testcase
	./code

clean:
	del *.o code testcase