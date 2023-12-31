add_executable(Sandbox src/SandboxApp.cpp)

target_include_directories(Sandbox PUBLIC ${PROJECT_SOURCE_DIR}/Periwinkle/src/ PUBLIC ${PROJECT_SOURCE_DIR}/Periwinkle/extern/spdlog/include/)

target_compile_definitions(Sandbox PUBLIC PW_PLATFORM_WINDOWS)

target_link_libraries(Sandbox PUBLIC Periwinkle)

install(TARGETS Sandbox EXPORT periwinkle-targets DESTINATION .)