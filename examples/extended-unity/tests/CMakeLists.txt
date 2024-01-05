# Testing library
FetchContent_Declare(
  unity
  GIT_REPOSITORY https://github.com/ThrowTheSwitch/Unity.git
  GIT_TAG v2.5.2)
FetchContent_MakeAvailable(unity)

# Tests need to be added as executables first
add_executable(unitytestlib unitytestlib.c)

# Should be linked to the main library, as well as the Catch2 testing library
target_link_libraries(unitytestlib PRIVATE c_library unity)

# If you register a test, then ctest and make test will run it.
# You can also run examples and check the output, as well.
add_test(NAME unitytestlibtest COMMAND unitytestlib) # Command can be a target
