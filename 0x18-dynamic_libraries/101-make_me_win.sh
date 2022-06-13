#!/bin/bash
wget -P /tmp https://github.com/evelynampadu/alx-low_level_programming/blob/main/0x17-doubly_linked_lists/libmask.so
export LD_PRELOAD=/tmp/libmask.so
