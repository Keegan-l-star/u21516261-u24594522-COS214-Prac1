# Compiler
CXX := g++
CXXFLAGS := -std=c++11 -Wall -Wextra -g

# Output executable name
TARGET := TestingMain

# Find all .cpp files in the current directory
SRCS := $(wildcard *.cpp)

# Object files (replace .cpp with .o)
OBJS := $(SRCS:.cpp=.o)

# Default rule
all: $(TARGET)

# Link all object files into the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile .cpp into .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

VALGRIND := valgrind
VGFLAGS  := --leak-check=full --show-leak-kinds=all --track-origins=yes \
            --errors-for-leak-kinds=all --error-exitcode=1

# Clean build files
clean:
	rm -f $(OBJS) $(TARGET)

# Rebuild everything
rebuild: clean all

run: all
	./$(TARGET)

v: all
	$(VALGRIND) $(VGFLAGS) ./$(TARGET) $(ARGS)

.PHONY: all clean rebuild
