CC = g++
CFLAGS = -Wall


main: HiringTool.o main.o
	$(CC) $(CFLAGS) -c HiringTool.o main.o

main.o: HiringTool.o main.cpp
	$(CC) $(CFLAGS) -c HiringTool.o main.cpp

HiringTool.o: HiringTool.cpp
	$(CC) $(CFLAGS) -c HiringTool.cpp
	
clean:
	rm -f main *.o
