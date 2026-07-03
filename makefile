CC      = gcc
CFLAGS  = -Wall -O2 -I include
LDFLAGS =
TARGET  = server

SRC = src/http_request.c src/main.c src/parse_http.c src/read_http.c src/utils.c src/ws.c src/server.c src/ws_message.c src/arena.c
OBJ = $(SRC:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET) $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean
