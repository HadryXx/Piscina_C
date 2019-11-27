#!/bin/sh
find . -not -name ".*" -o -type d -o -type f |wc -l |tr -d " "
