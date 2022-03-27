
rush-02: main.o utils.o utils.h
	gcc -Wall -Werror -Wextra main.o utils.o -o rush-02

main.o: main.c utils.h
	gcc -Wall -Werror -Wextra -c main.c

utils.o: utils.c utils.h
	gcc -Wall -Werror -Wextra -c utils.c

clean:
	rm *.o rush-02