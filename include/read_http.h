#ifndef READ_HTTP_H
#define READ_HTTP_H

#include "arena.h"

int read_http(int fd, struct http_request *req, char **raw_request,
              int *raw_request_size, arena *a);

#endif // READ_HTTP_H
