# include <stdio.h>
# include <emscripten/emscripten.h>

int main(int argc, char ** argv) {
  printf("hello world \n"); // weird needs a new line

}


#ifdef __cplusplus
extern "C" {
#endif

void EMSCRIPTEN_KEEPALIVE myFunction(int argc, char ** argv) {
  printf("my function called\n");

}

#ifdef __cplusplus
}
#endif
