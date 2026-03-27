cmake_minimum_required(VERSION 3.20)

project(Esercizi_prova_c_cpp C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 20)

file(GLOB SRC_FILES CONFIGURE_DEPENDS "esercizi/*.c")

foreach(src ${SRC_FILES})
    get_filename_component(exe_name ${src} NAME_WE)
    add_executable(${exe_name} ${src})
endforeach()