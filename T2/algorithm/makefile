OBJS = S-box.o L.o main.o
TARGET = sm4

$(TARGET): $(OBJS)
	$(CXX) $^ -o $@

$^: $@
	$(CXX) -c $^ -o $@

clean:
	rm $(OBJS) $(TARGET)