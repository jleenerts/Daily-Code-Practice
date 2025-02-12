CXX = g++

CXXFLAGS = -std=c++11 -Wall -Wextra -Werror -pedantic

TARGET = main

SRCS = *.cpp

OBJS = $(SRCS:.cpp=.o)

all: clean $(TARGET) run

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET) *.o