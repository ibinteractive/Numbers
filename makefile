# Usage:
# make        # compile all binary
# make clean  # remove ALL binaries and objects

all: hardy_ramanujan

hardy_ramanujan: hardy_ramanujan.o
	 gcc -o hardy_ramanujan hardy_ramanujan.o -lm

hardy_ramanujan.o: hardy_ramanujan.c
	 gcc -c hardy_ramanujan.c
     
clean:
	 rm hardy_ramanujan.o hardy_ramanujan

