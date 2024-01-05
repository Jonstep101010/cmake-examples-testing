# Note that headers are optional, and do not affect add_library, but they will not
# show up in IDEs unless they are listed in add_library.

# Optionally glob, but only for CMake 3.12 or later:
# file(GLOB HEADER_LIST CONFIGURE_DEPENDS "${ModernCMakeExample_SOURCE_DIR}/include/modern/*.hpp")
set(HEADER_LIST "${ModernCMakeExampleUnity_SOURCE_DIR}/include/lib.h")

# Make an automatic library - will be static or dynamic based on user setting
add_library(c_library lib.c ${HEADER_LIST})

# We need this directory, and users of our library will need it too
target_include_directories(c_library PUBLIC ../include)

# IDEs should put the headers in a nice place
source_group(
  TREE "${PROJECT_SOURCE_DIR}/include"
  PREFIX "Header Files"
  FILES ${HEADER_LIST})
