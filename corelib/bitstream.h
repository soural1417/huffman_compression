#ifndef _BITSTREAM_H
#define _BITSTREAM_H

#define DEFAULT_BUFFER_SIZE 128 * 1024
typedef unsigned char byte;
class bitstream
{
private:
  byte *buffer;
  unsigned buffer_size; //inbytes
  unsigned bit_pos;     //inbits

  unsigned remainder;
  unsigned remainder_size;

  inline unsigned get_byte_pos();
  inline unsigned get_bit_offset();
  inline unsigned get_free_bits();
  int micropack(byte, unsigned);
  bool add_remainder(unsigned, unsigned);

public:
  bitstream();
  bitstream(unsigned);
  ~bitstream();

  //packs data into buffer upto specified size
  //returns -1 if buffer overflow.
  //0 if okay
  int pack(unsigned, unsigned);
  //gives you a pointer to the buffer
  byte *flush_buffer();
  //clears the buffer then packs remainder in
  int reset_buffer();
};
#endif