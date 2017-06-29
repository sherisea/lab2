main6: timer6.o main6.o A.o
	g++ -o timer6 main6.o timer6.o A.o

timer6.o: timer6.cpp timer6.h
	g++ -c timer6.cpp

main6.o: main6.cpp timer6.h
	g++ -c main6.cpp

A.o: lab2.cpp a.h
	g++ -c A.cpp

clean:
	rm timer6 *.o
