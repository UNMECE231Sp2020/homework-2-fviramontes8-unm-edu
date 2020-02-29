all:	run_tests
run_tests:
	main.o fncs.o
	g++ main.o fncs.o -o run_tests
main.o: main.cpp
	g++ -c main.cpp
fncs.o: fncs.cpp
	g++ -c fncs.cpp
clean:
	rm -rf *o run_tests
