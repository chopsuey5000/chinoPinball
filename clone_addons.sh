#!/bin/bash

# Dependencies for chinoPinball

cd ../

if [ -z $1 ]; then
PREFIX="git clone https://github.com/"
else
PREFIX="git clone git@github.com:"
fi

${PREFIX}NickHardeman/ofxBullet.git