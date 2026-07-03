#ifndef HTTP_REQUEST_H
#define HTTP_REQUEST_H

typedef struct http_header
{
  char *name;
  char *value;
} http_header;

typedef struct http_request
{
  char method[6];
  // INFO: Supporting only 256 byte path for now.
  char path[256];
  struct http_header *headers;
  int headers_count;
} http_request;

struct http_header *get_header(struct http_request *req, char *name);

void print_request(struct http_request *req);

#endif // HTTP_REQUEST_H
