cmake_minimum_required(VERSION 3.0.0)
project(Hw1 VERSION 0.0.1$ENV{TRAVIS_BUILD_NUMBER})

set(PROJ_BUILD_NUMBER ${Hw1_VERSION_PATCH})
configure_file(config.h.in ${PROJECT_SOURCE_DIR}/config.h)

add_executable(Hw1 main.cpp)

target_compile_options(Hw1 PRIVATE -Wall -Wextra -pedantic -Werror)

set_target_properties(Hw1 PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED ON
    COMPILE_OPTIONS "-Wpedantic;-Wall;-Wextra"
)
install(TARGETS Hw1 RUNTIME DESTINATION bin)

set(CPACK_GENERATOR DEB)

set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")

set(CPACK_PACKAGE_CONTACT andrey.mtu@yandex.ru)

set(CPACK_DEBIAN_PACKAGE_SHLIBDEPS ON)
include(CPack)