FNS=fncs.cpp
MAIN=main.cpp $(FNS)

all:
	gcc $(MAIN) -o run_tests
clean:
	rm run_tests
