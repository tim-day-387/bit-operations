typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len);
void show_bytes_in_order(byte_pointer start, size_t len);
void print_all_bytes(byte_pointer start, size_t len);
void print_byte(unsigned char byte);
unsigned char print_bit(unsigned char byte, unsigned char value);
