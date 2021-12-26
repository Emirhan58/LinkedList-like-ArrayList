hepsi: derle calistir

derle:
	g++ -I ./include/ -o ./lib/Node.o -c ./src/Node.cpp
	g++ -I ./include/ -o ./lib/Iterator.o -c ./src/Iterator.cpp
	g++ -I ./include/ -o ./lib/LinkedList.o -c ./src/LinkedList.cpp
	g++ -I ./include/ -o ./bin/Test ./lib/Node.o ./lib/Iterator.o ./lib/LinkedList.o ./src/Test.cpp
	
calistir:
	./bin/Test
