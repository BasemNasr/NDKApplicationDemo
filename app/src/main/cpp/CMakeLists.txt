# We're required to set some minimum version here
cmake_minimum_required(VERSION 3.18.1)
# Declare a new native library
add_library(native-lib SHARED native-lib.cpp)

# Rest of your CMakeLists.txt file...

target_link_libraries(
        native-lib
        ${log-lib}
)


