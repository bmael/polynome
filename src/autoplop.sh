#!/bin/sh

echo "autoreconf..."
autoreconf

echo "autoheader..."
autoheader

echo "./configure"
./configure
