#include <stdio.h>
#include "callbacks.h"

void handler_1(void* context, void* payload) {
  printf("Hello from handler 1\n");
}
void handler_2(void* context, void* payload) {
  printf("Hello from handler 2\n");
}

int main(void) {
  printf("Hello world!\n");

  callbacks_t* callbacks = create_callbacks();
  register_callback_handler(callbacks, handler_1, NULL);
  register_callback_handler(callbacks, handler_2, NULL);
  dispatch_callbacks(callbacks, NULL);

  return 0;
}