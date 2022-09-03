#include <stdio.h>

#include "bitviewer.h"

void show_bytes(byte_pointer start, size_t len) {
  size_t i;

  for(i = 0; i < len; i++) {
    printf(" %.2x", start[i]);
  }

  printf("\n");
}

void show_bytes_in_order(byte_pointer start, size_t len) {
  size_t i;

  for(i = 0; i < len; i++) {
    printf(" %.2x", start[len - 1 - i]);
  }

  printf("\n");
}

void print_all_bytes(byte_pointer start, size_t len) {
  size_t i;

  for(i = 0; i < len; i++) {
    printf(" ");
    print_byte(start[len - 1 - i]);
  }

  printf("\n");
}

void print_byte(unsigned char byte) {
  byte = print_bit(byte, 128);
  byte = print_bit(byte, 64);
  byte = print_bit(byte, 32);
  byte = print_bit(byte, 16);
  byte = print_bit(byte, 8);
  byte = print_bit(byte, 4);
  byte = print_bit(byte, 2);
  byte = print_bit(byte, 1);
}

unsigned char print_bit(unsigned char byte, unsigned char value) {
  if(byte >= value) {
    byte = byte - value;
    printf("1");
  } else {
    printf("0");
  }

  return byte;
}
