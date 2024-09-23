do: nilaimaksimum testcase

nilaimaksimum: NilaiMaksimum.o
	g++ NilaiMaksimum.o -o nilaimaksimum

testcase: NilaiMaksimum_test.o
	g++ NilaiMaksimum_test.o -o testcase

NilaiMaksimum.o: NilaiMaksimum.cpp
	g++ -c NilaiMaksimum.cpp

NilaiMaksimum_test.o: NilaiMaksimum_test.cpp
	g++ -c NilaiMaksimum_test.cpp

run: 
	./nilaimaksimum

test: 
	./testcase

clean:
	del *.o nilaimaksimum testcase