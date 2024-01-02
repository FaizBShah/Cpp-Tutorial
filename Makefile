debug-build:
	g++ -ggdb -std=c++20 -o ./build/debug/build.exe main.cpp

release-build:
	g++ -O3 -DNDEBUG -std=c++20 -o ./build/release/build.exe main.cpp # O3 is used for super optimization, and DNDEBUG is used to remove debug related code