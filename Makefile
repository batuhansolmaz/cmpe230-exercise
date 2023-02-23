INCLUDE_DIR=./include/
EXEC=prog
CC=gcc
CFLAGS=-I $(INCLUDE_DIR) -o $(EXEC) 
SRC=$(wildcard ./src/*.c)


clean :
	rm $(EXEC)

main:  
	$(CC) $(SRC) $(CFLAGS)


