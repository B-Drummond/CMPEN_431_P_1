#include "YOURCODEHERE.h"

void  setSizesOffsetsAndMaskFields(cache* acache, unsigned int size, unsigned int assoc, unsigned int blocksize){
  unsigned int localVAbits=8*sizeof(uint64_t*);
  if (localVAbits!=64){
    fprintf(stderr,"Running non-portable code on unsupported platform, terminating. Please use designated machines.\n");
    exit(-1);
  }


  uint64_t n = 0;
  while(((uint64_t)1 << n) < acache->blocksize) n++;

  //number of sets = 2^(# bits in set)
  //number of ways = 2^(# bits in way)
  //blocksize = 2^(# bits in block offset)

  /*
  acache->numways : The number of ways
  acache->blocksize: The size of one block, in bytes
  acache->numsets: The number of sets in the cache
  acache->BO: The number of bits of block offset
  acache->TO: The number of bits of tag offset (i.e. the number of bits to shift the tag so that its lowest bit is at position 0)
  acache->VAImask: An andmask the size of the index field
  acache->VATmask: An andmask the size of the tag field*/
  // YOUR CODE GOES HERE

}


unsigned long long getindex(cache* acache, unsigned long long address){

//Shift and and with 1's

  return 0; //Replace with correct value
}

unsigned long long gettag(cache* acache, unsigned long long address){

//Shift and and with 1's

  return 0; //Replace with correct value
}

void writeback(cache* acache, unsigned int index, unsigned int oldestway){
//Write()
  // YOUR CODE GOES HERE

}

void fill(cache * acache, unsigned int index, unsigned int oldestway, unsigned long long address){
//Read()
  // YOUR CODE GOES HERE

}
