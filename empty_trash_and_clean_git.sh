#!/bin/sh

find . -name ".DS_Store" -delete -print
find . -name "*.out" -delete -print
find . -name ".git" -delete -print
find . -name ".gitignore" -delete -print

find . -name ".git" -type d -exec rm -rf "{}" \;