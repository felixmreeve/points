OBJECTS = main.o Pointcount.o Manager.o
COMPILER = g++
PROGNAME = main
OUTPUT = -o
OPTIONS = -Wall -c
HEADERS = Pointcount.hpp Manager.hpp CONST.hpp

$(PROGNAME): $(OBJECTS)
	$(COMPILER) $(OBJECTS) -Wall -l SDL2 $(OUTPUT) $(PROGNAME)

main.o: main.cpp $(HEADERS)
	$(COMPILER) $(OPTIONS) main.cpp

Pointcount.o: Pointcount.cpp $(HEADERS)
	$(COMPILER) $(OPTIONS) Pointcount.cpp

Manager.o: Manager.cpp $(HEADERS)
	$(COMPILER) $(OPTIONS) Manager.cpp
