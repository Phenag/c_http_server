#ifndef ARENA_H
#define ARENA_H

#include <stddef.h>

typedef struct
{
  size_t ptr;
  // TODO: Use array of pages.
  char *page;
  size_t size;
} arena;

void init_arena(arena *a, int pages);

void *allocate(size_t size, arena *a);

void destroy_arena(arena *a);

#endif // ARENA_H

void reset_arena(arena *a);
