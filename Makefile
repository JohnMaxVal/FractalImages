EXE_NAME = fractal.exe

CC = g++
COMPILER_FLAGS = -std=c++17 -g

SRC_PATH = ./src/*.cpp
INCLUDE_PATH = -I./include

OUTPUT_DGB_FLDR = ./Debug

build:
	$(CC) \
	$(COMPILER_FLAGS) \
	$(INCLUDE_PATH) \
	$(SRC_PATH) main.cpp \
	-o $(OUTPUT_DGB_FLDR)/$(EXE_NAME)

run:
	$(OUTPUT_DGB_FLDR)/$(EXE_NAME)

clear:
	-rm $(OUTPUT_DGB_FLDR)/$(EXE_NAME)