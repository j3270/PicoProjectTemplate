cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(App C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
pico_sdk_init()

add_executable(App
main.c
)

pico_enable_stdio_usb(App 1)
pico_enable_stdio_uart(App 1)

pico_add_extra_outputs(App)

target_link_libraries(App pico_stdlib)

if (PICO_CYW43_SUPPORTED)
    target_link_libraries(App pico_cyw43_arch_none)
endif()
