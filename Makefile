OBJECT_FILES= menu.o index_first_even.o index_last_odd.o sum_between_even_odd.o sum_before_even_and_after_odd.o
HEADERS= index_first_even.h index_last_odd.h sum_between_even_odd.h sum_before_even_and_after_odd.h

all: menu clear

menu: $(OBJECT_FILES)
	gcc $(OBJECT_FILES) -o menu

menu.o: menu.c $(HEADERS)
	gcc -c -std=c99 menu.c

index_first_even.o: index_first_even.c index_first_even.h
	gcc -c -std=c99 index_first_even.c

index_last_odd.o: index_last_odd.c index_last_odd.h
	gcc -c -std=c99 index_last_odd.c

sum_between_even_odd.o: sum_between_even_odd.c sum_between_even_odd.h
	gcc -c -std=c99 sum_between_even_odd.c

sum_before_even_and_after_odd.o: sum_before_even_and_after_odd.c sum_before_even_and_after_odd.h
	gcc -c -std=c99 sum_before_even_and_after_odd.c

clear:
	rm -rf *.o