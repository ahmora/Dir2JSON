CC = g++
CFLAGS = -lboost_system -lboost_filesystem
TARGET = program


compile: src/json.cpp lib/JsonDir.hpp
	$(CC) src/json.cpp -o $(TARGET).o $(CFLAGS)

clean: $(TARGET).o 
	rm $(TARGET).o dir.json
	rm -r src/*~ lib/*~

run: $(TARGET).o elem
	./$(TARGET).o elem
