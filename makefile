# Makefile with dependencies management (Q4)

CXX        = g++
CXXFLAGS   = -Wall  -std=c++2a
DEPFLAGS   = -MMD
LDFLAGS    =
SRCS       = chambre.cpp date.cpp client.cpp main.cpp hotel.cpp reservation.cpp

OBJS       = $(SRCS:.cpp=.o)
TARGET     = main 
DEPS	   = $(OBJS:.o=.d)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(DEPFLAGS) -c  $<

clean:
	rm -f *.o *.d

mrproper: clean
	rm -f $(TARGET)

exe: $(TARGET)
	./$(TARGET)

-include $(DEPS)