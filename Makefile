CC = clang -O

build: liamify unliamify

liamify: src/liamify.c src/encoder.c src/encoder.h
	$(CC) -o liamify src/liamify.c src/encoder.c

unliamify: src/unliamify.c src/encoder.c src/encoder.h
	$(CC) -o unliamify src/unliamify.c src/encoder.c

test: build-test
	./test/encoder

build-test: test/encoder.c src/encoder.c src/encoder.h
	$(CC) -o test/encoder test/encoder.c src/encoder.c

clean:
	rm -f liamify unliamify test/encoder
