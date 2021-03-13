# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("WolfgangDAW")

# Creates Executable
add_executable("Wolfgang" "Main.cpp")

# Install Targets
install(TARGETS "Wolfgang" DESTINATION bin) #${CMAKE_INSTALL_PREFIX}/bin 
install(FILES "Main.cpp" DESTINATION src)  #${CMAKE_INSTALL_PREFIX}/src 

# Includes CTest
include(CTest)

add_test("test1" "${CMAKE_CURRENT_BINARY_DIR}/Wolfgang")

# Includes CPACK
include(CPack)