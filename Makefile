lnoptions = -lncurses

fruit: fruit.o loop.o output.o
	gcc -o fruit fruit.o loop.o output.o $(lnoptions) && rm *.o

fruit.o: fruit.c fruit.h
	gcc -o fruit.o -c fruit.c

loop.o: loop.c fruit.h
	gcc -o loop.o -c loop.c

output.o: output.c fruit.h
	gcc -o output.o -c output.c