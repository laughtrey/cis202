#
CXXFLAGS+=-IHeader -std=c++11
CXXSOURCE=$(wildcard Source/*.cpp)
CXXOBJS=$(patsubst %.cpp,%.o,$(CXXSOURCE))
all: main

main: $(CXXOBJS)
	    $(CXX) $(LDFLAGS) -o $@ $^

run : main
	@echo "Running the program:"
	@./main

edit:
	@vim main.cpp

debug:
	@gdb ./main

clean :
	@rm main
