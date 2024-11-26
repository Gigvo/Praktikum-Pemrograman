do: code testcase

code: Soal_5.o
	g++ Soal_5.o -o code

testcase: Soal_5_test.o
	g++ Soal_5_test.o -o testcase

code.o: Soal_5.cpp
	g++ -c Soal_5.cpp

code_test.o: Soal_5_test.cpp
	g++ -c Soal_5_test.cpp

test:
	./testcase
	./code

clean:
	del *.o code testcase