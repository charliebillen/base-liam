build: liamify unliamify

liamify: src/liamify.c src/encoder.c src/encoder.h
	clang -o liamify src/liamify.c src/encoder.c

unliamify: src/unliamify.c src/encoder.c src/encoder.h
	clang -o unliamify src/unliamify.c src/encoder.c

build-test: test/encoder.c src/encoder.c src/encoder.h
	clang -o test/encoder test/encoder.c src/encoder.c

test: build-test
	./test/encoder

clean:
	rm -f liamify unliamify test/encoder
