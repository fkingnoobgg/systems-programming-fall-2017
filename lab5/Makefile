stringtest : stringtest.o pointers.o 
	cc -std=c99 -Wall -pedantic -Werror -o stringtest \
		stringtest.o pointers.o -lm

stringtest.o : stringtest.c pointers.h
	cc -std=c99 -Wall -pedantic -Werror -c stringtest.c

pointers.o : pointers.c pointers.h
	cc -std=c99 -Wall -pedantic -Werror -c pointers.c

clean:
	rm -f *.o stringtest
