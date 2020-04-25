all:
	@echo "run - clean, build, and run"
	@echo "clean - remove built files"

run: clean build

build:
	mkdir build && cd build && cmake .. && $(MAKE) && $(MAKE) run

clean:
	rm -rf ./build || true