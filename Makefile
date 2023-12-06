build: liamify unliamify

liamify: src/liamify.c src/encoder.c src/encoder.h
	clang -o liamify src/liamify.c src/encoder.c

unliamify: src/unliamify.c src/encoder.c src/encoder.h
	clang -o unliamify src/unliamify.c src/encoder.c

clean:
	rm liamify unliamify
