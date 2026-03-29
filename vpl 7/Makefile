CC = g++
CFLAGS = -Wall -Iinclude


TARGET = exe


SRCS = src/main.cpp src/Processo.cpp src/FilaProcessos.cpp
OBJS = $(SRCS:.cpp=.o)


all: $(TARGET)


$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)


src/%.o: src/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -f $(TARGET) src/*.o