dev-build:
	@echo "Creating dev build"
	g++ -ggdb -pedantic-errors -std=c++20 -o ./build/dev/build.exe main.cpp

release-build:
	@echo "Creating release build"
	g++ -O3 -DNDEBUG -pedantic-errors -std=c++20 -o ./build/release/build.exe main.cpp

run-dev:
	$(MAKE) dev-build
	./build/dev/build.exe

run-release:
	$(MAKE) release-build
	./build/release/build.exe