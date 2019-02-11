# huffman_compression
The implementation of the Huffman algorithm as a command line utility.

## Usage
Usage: huff [options] input_file  

Options:  
    -o output_file      : Mention the output file. By default a.out  
    -d                  : Decompress instead of compress  

## Source Directory structure
The main directory contains all the "fluff" code. It's the interface that the end user
interacts with. The main libraries are found in `corelib` folder. It contains all the data 
structures and algorithms needed to implement Huffman. Notice that the data structures were
in the STL. That's deliberate, as this is foremost a learning endeavour.

## Building
Build with

    make

The program "huff" should appear.

## File structure
The first 12 bytes of the output file are the file signature. 
By default it's the character sequence "nirav.com.np". After that 4 bytes
store the length of huffman table in little endian. After that everything is the 
compressed file.

## Caveats
Not ready to be used in anything remotely serious so far. At some point I intend to 
make it robust and dependable. But as of now, it is just an experiment.

## Vague plans
1. Compress folders
2. Try to mix with some other simple compression algorithm like RLE and compare efficiency.
3. Try various approaches to decoding Huffman

More on [nirav.com.np](https://nirav.com.np)