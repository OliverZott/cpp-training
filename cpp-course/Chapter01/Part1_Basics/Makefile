# Variables
CC = g++
CFLAGS = -Wall
LDFLAGS = 
OBJFILES = Exercise_1_square.o main.o
TARGET = Exercise_1_square

all: $(TARGET)

$(TARGET) : $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)

clean:
	rm -f $(OBJFILES) $(TARGET) *