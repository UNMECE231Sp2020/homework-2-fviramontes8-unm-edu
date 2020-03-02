FNS=fncs.cpp
MAIN=main.cpp $(FNS)

all:
	g++ $(MAIN) -o run_tests 
clean:
	rm run_tests
