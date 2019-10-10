configure_file(Generated.hpp.in Generated.hpp COPYONLY)

rock_library(rock_target_setup_supports_headers_in_build_dir
    USE_BINARY_DIR
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(rock_target_setup_supports_headers_in_build_dir_bin Main.cpp
    DEPS rock_target_setup_supports_headers_in_build_dir)

