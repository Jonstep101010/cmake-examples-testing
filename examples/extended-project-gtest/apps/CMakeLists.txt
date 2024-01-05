add_executable(app-gtest app-gtest.cpp)
target_compile_features(app-gtest PRIVATE cxx_std_17)

target_link_libraries(app-gtest PRIVATE modern_library_gtest fmt::fmt)
