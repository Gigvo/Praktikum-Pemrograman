do: homeworkproblem testcase

homeworkproblem: HomeworkProblem.o
	g++ HomeworkProblem.o -o homeworkproblem

testcase: HomeworkProblem_test.o
	g++ HomeworkProblem_test.o -o testcase

HomeworkProblem.o: HomeworkProblem.cpp
	g++ -c HomeworkProblem.cpp

HomeworkProblem_test.o: HomeworkProblem_test.cpp
	g++ -c HomeworkProblem_test.cpp

run:
	./homeworkproblem

test:
	./testcase

clean:
	del *.o homeworkproblem testcase