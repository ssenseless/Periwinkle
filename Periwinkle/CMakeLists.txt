add_library(Periwinkle SHARED 
	src/Periwinkle/Application.cpp 
	src/Periwinkle/Log.cpp

	src/Periwinkle/Application.h
	src/Periwinkle/Core.h
	src/Periwinkle/EntryPoint.h
	src/Periwinkle/Log.h

	src/Periwinkle.h)

target_include_directories(Periwinkle PUBLIC extern/spdlog/include)

target_compile_definitions(Periwinkle PUBLIC PW_PLATFORM_WINDOWS PUBLIC PW_BUILD_DLL)