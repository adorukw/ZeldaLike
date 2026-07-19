cmake_minimum_required(VERSION 3.10)

project(ZeldaLike)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_C_STANDARD 99)

add_compile_options(-Wall -Wextra -g)

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
find_package(SDL2_mixer REQUIRED)
find_package(SDL2_ttf REQUIRED)

file(GLOB SRCS src/*.c)

add_executable(ZeldaLike ${SRCS})

target_include_directories(ZeldaLike PRIVATE ${PROJECT_SOURCE_DIR}/include)

target_link_libraries(ZeldaLike
  SDL2::SDL2
  SDL2_image::SDL2_image
  SDL2_mixer::SDL2_mixer
  SDL2_ttf::SDL2_ttf
)

add_custom_target(copy_compile_db ALL
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        ${CMAKE_BINARY_DIR}/compile_commands.json
        ${PROJECT_SOURCE_DIR}/compile_commands.json
)
