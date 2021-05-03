PREFIX ?= /usr/local
CC ?= cc

output: dwmblocks.c config.def.h config.h
	${CC} `pkg-config --cflags x11 --libs x11` dwmblocks.c -o dwmblocks
config.h:
	cp config.def.h $@


clean:
	rm -f *.o *.gch dwmblocks config.h
install: output
	mkdir -p $(DESTDIR)$(PREFIX)/bin
	install -m 0755 dwmblocks $(DESTDIR)$(PREFIX)/bin/dwmblocks
uninstall:
	rm -f $(DESTDIR)$(PREFIX)/bin/dwmblocks
