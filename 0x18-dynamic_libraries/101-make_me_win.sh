#!/bin/bash
wget -P /tmp https://github.com/cruwmorgan/alx-low_level_programming/blob/master/0x18-dynamic_libraries/injectnow.so
export LD_PRELOAD=/tmp/injectnow.so
