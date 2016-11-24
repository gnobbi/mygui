cmake_minimum_required(VERSION 2.8)

# mycv
set(mygui_exe mygui)
file(GLOB_RECURSE mygui_srcs *.cpp)
message(warning ${mygui_srcs})
add_library(${mygui_exe} ${mygui_srcs})

include_directories(include)
include_directories(src)