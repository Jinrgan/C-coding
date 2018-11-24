CC = gcc
CFLAGS = -Wall -g -O0

str_cmp_hash: test.c str_cmp_hash.c
	$(CC) $(CFLAGS) -o $@ $^

.PHONY:clean
clean:
	rm -rf $(OBJS)