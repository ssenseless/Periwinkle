message(WARNING "hey ")

add_subdirectory(extern)

add_library(Periwinkle SHARED 
	src/Periwinkle/Application.cpp 
	src/Periwinkle/Log.cpp

	src/Periwinkle/Application.h
	src/Periwinkle/Core.h
	src/Periwinkle/EntryPoint.h
	src/Periwinkle/Log.h

	src/Periwinkle.h)

target_include_directories(Periwinkle PUBLIC 
						   $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/Periwinkle/extern/spdlog/include/>
						   $<INSTALL_INTERFACE:>)

target_compile_definitions(Periwinkle PUBLIC PW_PLATFORM_WINDOWS PRIVATE PW_BUILD_DLL)


install(TARGETS Periwinkle 
		EXPORT periwinkle-targets 
		DESTINATION .)