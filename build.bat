@echo off

mkdir build
pushd build
cl  -Zi h:\code\win32_handmade.cpp user32.lib
popd