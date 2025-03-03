#!/bin/python3

from subprocess import run
from sys import argv

if len(argv) != 2:
  print(f"Usage: {argv[0]} destination_dir")
  exit(1)

src = ".templates/*"
dest = argv[1]
run(f"mkdir {dest}", shell=True)
run(f"cp -R {src} {dest}", shell=True)
