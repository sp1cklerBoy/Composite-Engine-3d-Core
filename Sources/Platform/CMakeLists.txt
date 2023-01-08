cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)
project(Composite-Engine-3d-Core-Platform)

file(GLOB TARGET_SOURCES 
	"*.cpp"
	"*.cxx"
	".c" 
)

file(GLOB TARGET_HEADERS
	"../../Include/Platform/*.hpp"
	"../../Include/Platform/*.h"
)

add_library(Composite-Engine-3d-Core-Platform STATIC ${TARGET_SOURCES} ${TARGET_HEADERS})