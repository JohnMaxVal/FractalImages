EXE_NAME = fractal.exe

CC = g++
DEBUG_FRALG = -g

SRC_FILES = ./src/*.cpp
INCLUDE_FILES = -I./include

OUTPUT_DGB_FLDR = ./Debug

build:
	$(CC) $(DEBUG_FRALG) main.cpp -o $(OUTPUT_DGB_FLDR)/$(EXE_NAME)

run:
	$(OUTPUT_DGB_FLDR)/$(EXE_NAME);