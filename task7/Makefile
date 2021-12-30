OBJECT_FILES = ./build/one.o ./build/two.o

system: ${OBJECT_FILES}
./build/one.o: ./one.cpp
	g++ one.cpp -o ./build/one.o -c
./build/two.o: ./two.cpp
	g++ two.cpp -o ./build/two.o -c
all: system
	g++ main.cpp ${OBJECT_FILES} -o ./main

clean:
	rm ${OBJECT_FILES}
	rm ./main