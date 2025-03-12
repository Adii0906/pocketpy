set -e

# python prebuild.py

SRC=$(find src/ -name "*.c")

FLAGS="-std=c11 -lm -ldl -Iinclude -O0 -Wfatal-errors -g -DDEBUG -DPK_ENABLE_OS=1"

SANITIZE_FLAGS="-fsanitize=address,leak,undefined"

if [ "$(uname)" == "Darwin" ]; then
    SANITIZE_FLAGS="-fsanitize=address,undefined"
fi

echo "Compiling C files..."
clang $FLAGS $SANITIZE_FLAGS $SRC src2/main.c -o main

