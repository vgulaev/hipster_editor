srcdir	 = src/
TARGETS	 = hipster
INC=-I/mingw64/include/

.PHONY: all
all: $(TARGETS)

FILE_LIST = $(srcdir)window.c $(srcdir)main.c

ifeq ($(OS),Windows_NT)
	PARAMS_LIST = $(INC) $(FILE_LIST) -mwindows -lmingw32 -lSDL2main -L/mingw64/lib
else
  PARAMS_LIST = $(FILE_LIST)
endif

hipster: $(FILE_LIST)
	$(CC) $(PARAMS_LIST) -lSDL2 -lSDL2_image -o $@

.PHONY: clean
clean:
	@rm $(TARGETS) 2>/dev/null || true
