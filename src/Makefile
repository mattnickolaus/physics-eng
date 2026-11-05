# Default Compiler and Flags (Linux)
CC = gcc
CFLAGS = -Wall -g -lm
# RAYLIB_LINUX = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

# Windows Cross-Compiler and Flags
# Note: Ensure you have 'mingw-w64' installed on your Linux system
WCC = x86_64-w64-mingw32-gcc
# W_INC = -I"C:/raylib/raylib/src"
# W_LIB = -L"C:/raylib/raylib/src"
# RAYLIB_WIN = -lraylib -lopengl32 -lgdi32 -lwinmm

# Source files (.h files are included for tracking)
SRC = physics.c physics.h

# --- Targets ---
.PHONY: all linux windows clean

all: linux

# Build for Linux
linux: ../physics

../physics: $(SRC)
	$(CC) -o $@ $^ $(CFLAGS)
	# $(CC) -o $@ $^ $(CFLAGS) $(RAYLIB_LINUX)
# !FYI - $@ is shorthand for the target and $^ similarly is for the prerequisites (like .c files)

# Build for Windows
windows: ../physics.exe

../physics.exe: $(SRC)
	$(WCC) -o $@ $^ $(CFLAGS)
	# $(WCC) -o $@ $^ $(CFLAGS) $(W_INC) $(W_LIB) $(RAYLIB_WIN)

clean:
	rm -f ../platformer ../platformer.exe
