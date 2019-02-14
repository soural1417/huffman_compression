#ifndef _HUFFMAN_H
#define _HUFFMAN_H
#include "../param_parser.h"
#include "tree.h"

class huffman_code
{
private:
  unsigned code;
  unsigned size;

public:
  huffman_code();
  void add_left();
  void add_right();
  unsigned get_code() const;
  unsigned get_size() const;
};
std::ostream &operator<<(std::ostream &os, const huffman_code &m); //for debug purpose only

tree *make_huffman_tree(input_param);
huffman_code *generate_code(tree *);

#include <fstream>
unsigned *count_frequency(std::ifstream &, unsigned); //exposed for debugging

#endif