do: code

code: code.o
	g++ code.o -o code

code.o: code.cpp
	g++ -c code.cpp

test:
	./code

clean:
	del *.o code 

