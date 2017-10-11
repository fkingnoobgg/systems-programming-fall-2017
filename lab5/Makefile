stringtest : stringtest.o pointers.o maximum.o
	cc -std=c99 -Wall -pedantic -Werror -o stringtest \
		stringtest.o pointers.o maximum.o -lm

stringtest.o : stringtest.c pointers.h
	cc -std=c99 -Wall -pedantic -Werror -c stringtest.c

pointers.o : pointers.c pointers.h
	cc -std=c99 -Wall -pedantic -Werror -c pointers.c

maximum.o : maximum.c pointers.h
	cc -std=c99 -Wall -pedantic -Werror -c maximum.c

clean:
	rm -f *.o stringtest
