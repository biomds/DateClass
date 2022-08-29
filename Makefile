OBJS = main.o Date.o
CC = gcc

main:$(OBJS)
	$(CC) $^ -o Date

%.o:%.c
	$(CC) $^ -o $@

clean:
	$(RM) *.o  -r
