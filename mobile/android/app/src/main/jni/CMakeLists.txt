cmake_minimum_required(VERSION 3.22)
project(rebloom_android C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SDL_SHARED ON CACHE BOOL "" FORCE)
set(SDL_STATIC OFF CACHE BOOL "" FORCE)
set(SDL_TEST OFF CACHE BOOL "" FORCE)
add_subdirectory(${REBLOOM_SDL} SDL2)
if(NOT TARGET SDL2::SDL2)
    add_library(SDL2::SDL2 ALIAS SDL2)
endif()

add_library(ps2runtime STATIC IMPORTED)
set_target_properties(ps2runtime PROPERTIES IMPORTED_LOCATION "${REBLOOM_RUNTIME}/libps2runtime.a")
add_library(ps2game STATIC IMPORTED)
set_target_properties(ps2game PROPERTIES IMPORTED_LOCATION "${REBLOOM_RUNTIME}/libps2game.a")

add_library(main SHARED
    android_main.cpp
    ${REBLOOM_ROOT}/host/main.cpp
    ${REBLOOM_ROOT}/host/window.cpp
    ${REBLOOM_ROOT}/host/crash.cpp
    ${REBLOOM_ROOT}/host/keymap.cpp
    ${REBLOOM_ROOT}/host/quickmenu.cpp
    ${REBLOOM_ROOT}/host/stretch.cpp
)
set_source_files_properties(${REBLOOM_ROOT}/host/main.cpp PROPERTIES COMPILE_DEFINITIONS "main=ps2_host_main")
target_include_directories(main PRIVATE
    ${REBLOOM_ROOT}/runtime/include
    ${REBLOOM_GEN}
    ${REBLOOM_SDL}/include
    ${REBLOOM_WGPU}/include
)
target_compile_definitions(main PRIVATE PS2_WINDOW PS2_GPU)
target_link_libraries(main PRIVATE
    ps2game ps2runtime SDL2::SDL2
    ${REBLOOM_WGPU}/lib/libwgpu_native.a
    android log dl m
)
