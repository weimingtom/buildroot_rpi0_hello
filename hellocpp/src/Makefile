#OBJS := hellocpp.o
#OBJS := strobe.o
OBJS := Arduino.o arduino_test.o
BIN := hellocpp

# build hellocpp executable when user executes "make"
$(BIN): $(OBJS)
	$(CXX) $(LDFLAGS) $(OBJS) -o $@ 

%.o: %.cpp
	$(CXX) $(CXXLAGS) -o $@ -c $<

# remove object files and executable when user executes "make clean"
clean:
	rm *.o *.a $(BIN)

