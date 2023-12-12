CC=g++
CFLAGS=-std=c++20 -fmodules-ts -Wall -Wextra -Werror

all: second_lab 

rebuild: clean second_lab

second_lab: 
	$(CC) $(CFLAGS) *.ixx *.cpp -o second-second_lab


clean:
	rm second_lab