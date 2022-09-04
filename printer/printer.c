#include <stdio.h>

#include "bitviewer/bitviewer.h"
#include "printer.h"

void show_all_info(char title[], byte_pointer start, size_t len) {
  printf("Values for %s:\n", title);
  printf("  On disk: ");
  show_bytes(start, len);

  printf("  In order: ");
  show_bytes_in_order(start, len);

  printf("  Bits: ");
  print_all_bytes(start, len);

  printf("\n");
}
