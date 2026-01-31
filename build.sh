#!/bin/bash
# Minimal build script for autoconf/automake

set -e

# Generate build system files
autoreconf -fiv

# Configure the build
./configure

# Build the library
make

echo ""
echo "Build complete."
