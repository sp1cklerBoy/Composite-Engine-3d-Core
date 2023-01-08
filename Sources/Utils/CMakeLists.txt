cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)
project(Composite-Engine-3d-Core-Utils)

file(GLOB TARGET_SOURCES
	"*.cpp"
)

file(GLOB TARGET_HEADERS
	"../../Include/Utils/*.hpp"
	"../../Include/Utils/*.h"
)

add_library(Composite-Engine-3d-Core-Utils STATIC ${TARGET_SOURCES} ${TARGET_HEADERS})