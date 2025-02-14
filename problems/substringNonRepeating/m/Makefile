# Compiler
CXX = g++

# Source files and executable name
SRC = main.cpp substring.cpp
EXE = substring

# Default target: build the executable
all: $(EXE)

# Link object files to create the executable
$(EXE): $(SRC)
	$(CXX) -o $(EXE) $(SRC)

# Clean up
clean:
	rm -f $(EXE)
