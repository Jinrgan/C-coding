CC = gcc
CFLAGS = -Wall -g -O0

test: test.c str_cat.c
	$(CC) $(CFLAGS) -o $@ $^

.PHONY:clean
clean:
	rm -rf $(OBJS)