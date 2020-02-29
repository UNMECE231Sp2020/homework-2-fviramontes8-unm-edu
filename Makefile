FNS=fncs.cpp
Main=main.cpp $(FNS)

all:
	gcc $(MAIN) -o testComplex
clean:
	rm testComplex	
