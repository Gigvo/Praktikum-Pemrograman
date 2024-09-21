do: sum testcase

sum: sum.o
	g++ sum.o -o sum

testcase: sum_test.o
	g++ sum_test.o -o testcase

sum.o: sum.cpp
	g++ -c sum.cpp

sum_test.o: sum_test.cpp
	g++ -c sum_test.cpp

run: 
	./sum

test:
	./testcase 

clean:
	del *.o sum testcase
