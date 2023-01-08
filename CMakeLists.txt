cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)
project(Composite-Engine-3d-Core)

set(DEPS_GLFW_INCLUDE_DIR "Deps/GLFW/include")

file(GLOB TARGET_SOURCES
     "Sources/*.cpp"
     "Sources/*.cxx"
     "Sources/*.c"
)
file(GLOB TARGET_HEADERS
	"Include/*.hpp"
	"Include/*.h"
)

if(WIN32)
	set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
	set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
	set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
	set(GLFW_INSTALL OFF CACHE BOOL "" FORCE)
	add_subdirectory(Deps/GLFW)
else()
	find_package(glfw3 REQUIRED)
	if(NOT TARGET glfw)
		message("Could not find GLFW library in current environment!\n Buidling from sources.....")
		set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
		set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
		set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
		set(GLFW_INSTALL OFF CACHE BOOL "" FORCE)
		add_subdirectory(Deps/GLFW)
	endif()
endif()


##include_directories(Deps/GLFW/include)

add_subdirectory(Sources/Utils)
add_subdirectory(Sources/Platform)

include_directories(${DEPS_GLFW_INCLUDE_DIR})

include_directories(Include)

target_link_libraries(glfw)

add_library(Composite-Engine-3d-Core STATIC ${TARGET_SOURCES} ${TARGET_HEADERS})

