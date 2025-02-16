cmake_minimum_required(VERSION 3.16)

project(Teht5 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Teht5 main.cpp
    Notifikaattori.h Notifikaattori.cpp
    Seuraaja.h Seuraaja.cpp)

include(GNUInstallDirs)
install(TARGETS Teht5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
