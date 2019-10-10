rock_library(rock_target_setup_supports_headers_in_build_dir
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(rock_target_setup_supports_headers_in_build_dir_bin Main.cpp
    DEPS rock_target_setup_supports_headers_in_build_dir)

