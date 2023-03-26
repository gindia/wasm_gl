@echo off

clang -O2 -fno-builtin --target=wasm32 --no-standard-libraries ^
  -Wl,--no-entry -Wl,--export=Main -Wl,--export=__heap_base -Wl,--allow-undefined ^
  -o wasm.wasm wasm.c
