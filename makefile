
CC=clang
OPT=-O3

BIN=bin
P=-p

CFILES=vm/vm.c vm/io.c vm/gc.c vm/obj/map.c

default: all

all: $(BIN)/minivm

minivm $(BIN)/minivm: $(CFILES) main/main.c 
	@mkdir $(P) $(BIN)
	$(CC) $^ -o $@ $(CFLAGS) -I. -lm $(OPT)

clean: .dummy
	: rm -r $(BIN)

.dummy:
