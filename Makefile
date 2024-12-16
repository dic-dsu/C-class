CC = gcc
LDLIB = -lcs50

all:
%: %.c
	$(CC) $< -o $@ $(LDLIB) && ./$@ && rm -f $@