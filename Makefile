EXE_NAME = fractal.exe

CC = g++
COMPILER_FLAGS = -std=c++17 -g

SRC_PATH = ./src/*.cpp
INCLUDE_PATH = -I./include

#SDL config
SDL_INCLUDE = -IC:/mingw_dev_lib/include/SDL2
SDL_LIBS = -LC:/mingw_dev_lib/lib
SDL_LINKER_FLAGS = -lmingw32 -lSDL2main -lSDL2

OUTPUT_DGB_FLDR = ./Debug

build:
	$(CC) \
	$(COMPILER_FLAGS) \
	$(INCLUDE_PATH) \
	$(SDL_INCLUDE) \
	$(SDL_LIBS) \
	$(SRC_PATH) main.cpp \
	$(SDL_LINKER_FLAGS) \
	-o $(OUTPUT_DGB_FLDR)/$(EXE_NAME)

run:
	$(OUTPUT_DGB_FLDR)/$(EXE_NAME)

clear:
	-rm $(OUTPUT_DGB_FLDR)/$(EXE_NAME)