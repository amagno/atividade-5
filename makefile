VERSION = v1-0
CFLAGS = -Wall -g -lm
SRC=$(wildcard */*.c)
HEADERS=$(wildcard */*.h)
avtividade-5-$(VERSION): $(HEADERS) $(SRC) ; gcc -o $@ $^ $(CFLAGS)
clean:
	rm *.exe