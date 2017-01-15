CC = gcc
CFLAGS = -Wall -O2

target = basic_class_definition
objs = main.o TestAbc.o

$(target): $(objs)
	$(CC) $(CFLAGS) -o $@ $^

main.o: TestAbc.o
TestAbc.o: TestAbc.c  TestAbc.h

.PHONY: clean
clean:
	rm -f $(objs) $(target)
