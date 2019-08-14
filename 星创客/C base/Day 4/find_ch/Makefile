CC = gcc
CFLAGS = -Wall -g -O0

find_ch: find_ch.c my_strcmp.c
	$(CC) $(CFLAGS) -o $@ $^

.PHONY:clean
clean:
	rm -rf $(OBJS)