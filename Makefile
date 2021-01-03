OBJS=$(patsubst %.cpp,%.out,$(wildcard *.cpp)) 

all: bin $(OBJS)

bin:
	mkdir bin

%.out: %.cpp
	g++ $< -Wall -Wextra -pedantic-errors -o bin/$*


clean: 
	rm -rf bin

.PHONY: all
