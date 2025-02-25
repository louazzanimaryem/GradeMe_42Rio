#!/bin/bash

REPO_URL="https://github.com/allandantas21/gradeMe_42rio.git"
REPO_DIR="gradeMe_42rio"
git clone $REPO_URL
cd $REPO_DIR
make && make