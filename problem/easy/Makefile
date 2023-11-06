# Makefile pour compiler tout les .cpp en executables

# Variables
CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++11
SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)
EXEC = $(SRC:.cpp=)

# Regles
all: $(EXEC) clean

%: %.o
	$(CC) $(CFLAGS) $< -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
