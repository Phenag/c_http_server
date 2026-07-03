#ifndef PARSE_HTTP_H
#define PARSE_HTTP_H

#include "arena.h"
#include <stddef.h>

char *read_block(char *buffer, char *start, char ch, char *name);

int parse_http(char *request, size_t size, struct http_request *req, arena *a);

#endif // PARSE_HTTP_H
