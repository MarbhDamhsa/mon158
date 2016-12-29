#
#             Makefile for mon158
#
#
#

mon158: mon158.o mon158Func.o
	gcc mon158.o mon158Func.o -o mon158 -lm

mon158Func.o: mon158Func.c mon158Func.h
	gcc -c mon158Func.c mon158Func.h

mon158.o: mon158.c mon158Func.h
	gcc -c mon158.c mon158Func.h

clean:
	rm *.o *.gch
