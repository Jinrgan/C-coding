CC = gcc
CFLAGS = -Wall -g -O0

my_strcat: test.c my_strcat.c
	$(CC) $(CFLAGS) -o $@ $^

.PHONY:clean
clean:
	rm -rf $(OBJS)