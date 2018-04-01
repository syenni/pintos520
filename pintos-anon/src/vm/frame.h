#ifndef FRAMEH
#define FRAMEH

// Frame table stuff
#include "threads/synch.h"

// Lock for frame table
struct lock lock_ft;
// List for frame table entries
struct list ft;

// Entry in the frame table
struct ft_entry {
  void *frame; // Pointer to the frame
  struct thread *t; // Thread using the frame
  struct list_elem ftelem; // List element for list ft
};

#endif
