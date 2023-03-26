// compiled with:
// clang -O2 -fno-builtin --target=wasm32 --no-standard-libraries -Wl,--no-entry -Wl,--export=Main -Wl,--export=__heap_base -Wl,--allow-undefined -o wasm.wasm wasm.c
#ifdef __cplusplus
extern "C" {
#endif

#define GL_COLOR_BUFFER_BIT               0x00004000

extern void  consoleLog(unsigned long);

extern void  glClearColor(float r, float g, float b, float a);
extern void  glClear(unsigned int flags);

extern float sinf(float);
extern float cosf(float);
extern unsigned long ticks(void);

extern void 
Main(void) 
{
  // consoleLog(ticks());
  glClearColor(
      sinf((float)ticks() * 0.01), 
      cosf((float)ticks() * 0.01), 
      0.0, 
      1.0
  );
  glClear(GL_COLOR_BUFFER_BIT);
}

#ifdef __cplusplus
}
#endif
