#!/bin/sh

#set -x

SRC=".templates/*"
DEST=$1

if [ -d "$DEST" ]; then
  rm -rf $DEST
fi

mkdir $DEST

cp -R $SRC $DEST

cd $DEST
