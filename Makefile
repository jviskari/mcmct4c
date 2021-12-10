.PHONY: all test clean compile gen mkbuild clean

all: compile

run: compile
	cd build && ./app/app

test: compile
	cd build && ctest .

compile: gen
	cd build && cmake --build . --target all && dot -Tpng -o foo.png graph/foo.dot

gen: mkbuild
	cd build && cmake .. --graphviz=graph/foo.dot

mkbuild:
	mkdir -p build

clean:
	rm -rf build
