#!/bin/bash

REPO_URL="https://github.com/allandantas21/GradeMe_42Rio.git"
REPO_DIR="GradeMe_42Rio"

if [ ! -d "$REPO_DIR" ]; then
  git clone "$REPO_URL"
fi

cd "$REPO_DIR"

make

exit 0