
rush-02: main.o utils.o utils.h
	gcc -Wall -Werror -Wextra *.o -o rush-02

main.o: main.c utils.h
	gcc -Wall -Werror -Wextra -c main.c

utils.o: utils.c one.c two.c three.c four.c five.c utils.h
	gcc -Wall -Werror -Wextra -c utils.c one.c two.c three.c four.c five.c

fclean:
	rm *.o rush-02