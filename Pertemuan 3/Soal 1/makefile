do: persamaankuadrat testcase

persamaankuadrat: PersamaanKuadrat.o
	g++ PersamaanKuadrat.o -o persamaankuadrat

testcase: PersamaanKuadrat_test.o
	g++ PersamaanKuadrat_test.o -o testcase

PersamaanKuadrat.o: PersamaanKuadrat.cpp
	g++ -c PersamaanKuadrat.cpp

PersamaanKuadrat_test.o : PersamaanKuadrat_test.cpp
	g++ -c PersamaanKuadrat_test.cpp

run:
	./persamaankuadrat

test:
	./testcase

clean:
	del *.o persamaankuadrat testcase
	