pong:pong.c
	cc -o pong pong.c
clean:
	rm -f pong
install:
	mv ./pong /usr/bin/
uninstall:
	rm -f /usr/bin/pong
