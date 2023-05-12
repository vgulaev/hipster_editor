srcdir	 =src/
TARGETS	 = hipster

.PHONY: all
all: $(TARGETS)

hipster: $(srcdir)debug.c $(srcdir)window.c $(srcdir)main.c
	$(CC) $(srcdir)debug.c $(srcdir)window.c $(srcdir)main.c -lSDL2 -o $@

.PHONY: clean
clean:
	@rm $(TARGETS) 2>/dev/null || true
