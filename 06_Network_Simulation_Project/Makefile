# Makefile for SC601 Project - Bhushan Zade (MS2421)

CC = gcc
CFLAGS = -Wall
TARGET = net_sim

OBJS = MS2421_main.o MS2421_fun.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

MS2421_main.o: MS2421_main.c MS2421_fun.h
	$(CC) $(CFLAGS) -c MS2421_main.c

MS2421_fun.o: MS2421_fun.c MS2421_fun.h MS2421_param.h
	$(CC) $(CFLAGS) -c MS2421_fun.c

clean:
	rm -f $(OBJS) $(TARGET)

run: all
	./$(TARGET)
