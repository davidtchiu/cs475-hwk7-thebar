all: thebar.c bartender.o customer.o
	gcc -Wall -o thebar thebar.c bartender.o customer.o -lpthread

bartender.o: bartender.h bartender.c
	gcc -Wall -c bartender.c

customer.o: customer.h customer.c
	gcc -Wall -c customer.c

clean:
	rm -f thebar *.o
