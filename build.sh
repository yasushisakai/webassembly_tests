#!/bin/bash

/home/yasushisakai/code/emsdk/emscripten/incoming/emcc hello.c -s WASM=1 -o dist/hello.html --shell-file template.html -s NO_EXIT_RUNTIME=1 -s EXTRA_EXPORTED_RUNTIME_METHODS='["ccall"]'

cp hello.* /var/www/html
