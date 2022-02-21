.PHONY: clean

all:
	g++ -std=c++11 -Wfatal-errors main.cpp dictionary.cpp -o wordler

clean:
	rm -rf *.o wordler