#!/bin/bash

echo '#include <stdio.h>' > /tmp/win.c
echo '#include <stdlib.h>' >> /tmp/win.c
echo 'int rand(void) { return 6; }' >> /tmp/win.c
gcc -shared -fPIC -o /tmp/win.so /tmp/win.c
export LD_PRELOAD=/tmp/win.so

