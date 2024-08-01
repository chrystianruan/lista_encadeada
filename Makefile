#author: Chrystian
#project: Projeto List Encadeada

PROG=prog
CC=g++
CPPFLAGS=-O0 -g -Wall -pedantic

OBJS=main.o vetor.o node.o

$(PROG):$(OBJS)
	$(CC) -o $(PROG) $(OBJS)

main.o: vetor.h
	$(CC) $(CPPFLAGS) -c main.cpp

vetor.o: vetor.h
	$(CC) $(CPPFLAGS) -c vetor.cpp

node.o: node.h
	$(CC) $(CPPFLAGS) -c node.cpp
clean: 
	rm -rf $(PROG) $(OBJS)